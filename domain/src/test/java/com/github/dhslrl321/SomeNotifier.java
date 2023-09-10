package com.github.dhslrl321;

import com.github.dhslrl321.model.KakaoSender;
import com.github.dhslrl321.model.Notification;
import com.github.dhslrl321.model.NotificationType;
import com.github.dhslrl321.model.SmsSender;

import static com.github.dhslrl321.model.NotificationType.KAKAO;
import static com.github.dhslrl321.model.NotificationType.SMS;

public class SomeNotifier {

    SmsSender smsSender;
    KakaoSender kakaoSender;
    SlackSender slackSender;

    void doNotify(Notification notification) {
        if (KAKAO.equals(notification.getType())) {
            kakaoSender.send(notification);
        } else if (SMS.equals(notification.getType())) {
            smsSender.send(notification);
        }
    }

}
