package com.github.dhslrl321.application;

import com.github.dhslrl321.dependency.SubscriptionProductItem;
import com.github.dhslrl321.dependency.SubscriptionUser;
import com.github.dhslrl321.domain.CreateSubscriptionCommand;
import lombok.Value;

@Value(staticConstructor = "of")
public class SimpleCreateSubscriptionCommand implements CreateSubscriptionCommand {

    SubscriptionUser user;
    SubscriptionProductItem productItem;

    @Override
    public SubscriptionUser getUser() {
        return this.user;
    }

    @Override
    public SubscriptionProductItem getProductItem() {
        return this.productItem;
    }
}
