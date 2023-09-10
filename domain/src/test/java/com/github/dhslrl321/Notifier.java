package com.github.dhslrl321;

import com.github.dhslrl321.model.*;

import java.util.List;

import static com.github.dhslrl321.model.ContentType.FAREWELL;
import static com.github.dhslrl321.model.ContentType.GREETING;
import static com.github.dhslrl321.model.NotificationType.KAKAO;
import static com.github.dhslrl321.model.NotificationType.SMS;

public class Notifier {

    private final NotifyHistoryRepository notifyHistoryRepository;
    private final SmsSender smsSender;
    private final KakaoSender kakaoSender;
    private final MessageTemplateFinder templateFinder;

    private final List<Subject> blackList;

    public Notifier(NotifyHistoryRepository notifyHistoryRepository, SmsSender smsSender, KakaoSender kakaoSender, MessageTemplateFinder templateFinder, List<Subject> blackList) {
        this.notifyHistoryRepository = notifyHistoryRepository;
        this.smsSender = smsSender;
        this.kakaoSender = kakaoSender;
        this.templateFinder = templateFinder;
        this.blackList = blackList;
    }

    public void doNotify(Notification notification) {

        if (notifyHistoryRepository.existBy(notification.getId())) {
            throw new IllegalArgumentException("이미 전송한 메시지입니다");
        }

        Content content = notification.getContent();

        if (blackList.contains(notification.getSubject()) || content.size() > 100) {
            throw new IllegalArgumentException("메시지를 전송 제약조건에 실패합니다");
        }

        Template template = null;
        if (GREETING.equals(content.getType())) {
            template = templateFinder.getGreetingTemplate();
        } else if (FAREWELL.equals(content.getType())) {
            template = templateFinder.getFarewellTemplate();
        } else {
            throw new IllegalArgumentException("지원하지 않는 메시지 전송 모듈입니다");
        }

        TemplateMessage message = template.apply(notification);

        if (KAKAO.equals(notification.getType())) {
            kakaoSender.send(message);
        } else if (SMS.equals(notification.getType())) {
            smsSender.send(message);
        }
    }
}
