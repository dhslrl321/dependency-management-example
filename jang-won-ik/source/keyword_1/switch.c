#include <stdio.h>

int main() {

    int grade;

    printf("학년을 입력하세요\n");
    scanf(" %d", &grade);

    switch(grade) {
        case 1: {
            printf("1학년 학생입니다.");
            break;
        }
        case 2: {
            printf("2학년 학생입니다.");
            break;
        }
        case 3: {
            printf("3학년 학생입니다.");
            break;
        }
        case 4: {
            printf("4학년 학생입니다.");
            break;
        }
        case 5:
        case 6: {
            printf("졸업 예정 학생입니다");
            break;
        }
        default: {
            printf("졸업생 입니다.");
            break;
        }
    }
}