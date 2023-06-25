package com.github.dhslrl321.application;

import com.github.dhslrl321.dependency.ProductItemFinder;
import com.github.dhslrl321.dependency.SubscriptionProductItem;
import com.github.dhslrl321.dependency.SubscriptionUser;
import com.github.dhslrl321.dependency.UserFinder;
import com.github.dhslrl321.domain.Subscription;
import com.github.dhslrl321.domain.SubscriptionFactory;
import com.github.dhslrl321.domain.SubscriptionRepository;
import lombok.RequiredArgsConstructor;
import org.springframework.stereotype.Service;

@Service
@RequiredArgsConstructor
public class CreateSubscriptionService {

    private final SubscriptionFactory factory;
    private final SubscriptionRepository repository;

    private final UserFinder userFinder;
    private final ProductItemFinder productItemFinder;

    public void create(long userId, long productItemId) {

        // 의존성 제어
        SubscriptionUser user = userFinder.findBy(userId);
        SubscriptionProductItem item = productItemFinder.findBy(productItemId);

        SimpleCreateSubscriptionCommand command = SimpleCreateSubscriptionCommand.of(user, item);

        Subscription subscription = factory.create(command);

        repository.save(subscription);
    }
}
