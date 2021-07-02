#include <stdio.h>
#include <assert.h>

int main() {
    int number = 16;

    int *pointer = &number; // number 변수의 주소값 저장

    assert(&number == pointer);
    assert(number == *pointer);
    assert(&number != &pointer);

    printf("테스트 성공");

    return 0;
}