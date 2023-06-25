package com.github.dhslrl321.domain;

import com.github.dhslrl321.dependency.SubscriptionProductItem;
import com.github.dhslrl321.dependency.SubscriptionUser;

public class SubscriptionFactory {
    public Subscription create(CreateSubscriptionCommand command) {

        SubscriptionUser user = command.getUser();
        SubscriptionProductItem productItem = command.getProductItem();

        return Subscription.newInstance(1, user, productItem);
    }
}
