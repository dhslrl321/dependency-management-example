package com.github.dhslrl321;

import com.github.dhslrl321.model.MessageTemplateFinder;
import com.github.dhslrl321.model.Notification;
import com.github.dhslrl321.model.TemplateMessage;
import com.github.dhslrl321.simple.NotifierContainer;
import com.github.dhslrl321.simple.NotifierPreCondition;

public class SimpleNotifier {

    NotifierPreCondition preCondition;
    MessageTemplateFinder templateFinder;
    NotifierContainer notifier;

    public void doNotify(Notification notification) {

        preCondition.check(notification);

        TemplateMessage message = templateFinder.findBy(notification);

        notifier.doNotify(message);
    }
}
