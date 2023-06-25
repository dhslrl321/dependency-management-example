package com.github.dhslrl321.domain;

import com.github.dhslrl321.dependency.SubscriptionProductItem;
import com.github.dhslrl321.dependency.SubscriptionUser;

public interface CreateSubscriptionCommand {
    SubscriptionUser getUser();

    SubscriptionProductItem getProductItem();
}
