# 의존성을 관리하는 방법

```
.
├── application
├── domain
├── dependency
├── dependency-impl
├── external-product-api
└── legacy-user
```

- **application**
  - subscription application layer 모듈
  - 구독 생성 기능
- **domain**
  - subscription domain 모듈
  - 구독 순수 도메인
- **dependency**
  - 외부 bounded context 의 ref
- **dependency-impl**
  - 외부 bounded context 와 연결되는 실제 구현부
- **external-product-api**
  - 외부 bounded context 1. product domain
- **legacy-user**
  - 외부 bounded context 1. user domain