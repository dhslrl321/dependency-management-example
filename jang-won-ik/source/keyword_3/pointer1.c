#include <stdio.h>

int main() {
    int number = 16;

    int *pointer = &number; // number 변수의 주소값 저장

    printf("--number 의 주소값 출력-- \n");
    printf("%#010x \n", pointer);
    printf("%#010x \n", &number);
    printf("%#010x \n", &*pointer);
    printf("\n\n");

    printf("--number 에 할당된 값 출력-- \n");
    printf("%d \n", number);
    printf("%d \n", *pointer);
    printf("\n\n");

    printf("--pointer 의 주소값 출력-- \n");
    printf("%#010x \n", &pointer);
    printf("\n\n");
}