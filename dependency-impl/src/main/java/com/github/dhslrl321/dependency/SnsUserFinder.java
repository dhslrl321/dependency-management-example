package com.github.dhslrl321.dependency;

import org.springframework.stereotype.Component;

@Component
public class SnsUserFinder implements UserFinder{

    @Override
    public SubscriptionUser findBy(long id) {
        return null;
    }
}
