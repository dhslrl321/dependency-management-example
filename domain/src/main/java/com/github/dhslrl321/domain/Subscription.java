package com.github.dhslrl321.domain;

import com.github.dhslrl321.dependency.SubscriptionProductItem;
import com.github.dhslrl321.dependency.SubscriptionUser;
import lombok.AllArgsConstructor;

@AllArgsConstructor(staticName = "newInstance")
public class Subscription {
    long id;
    SubscriptionUser user;
    SubscriptionProductItem productItem;
}
