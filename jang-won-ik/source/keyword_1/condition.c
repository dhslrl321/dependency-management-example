#include <stdio.h>

int main() {
    printf("몇 학년인가? \n");

    int grade = 0;
    scanf("%d", &grade);

    if(grade == 3) {
        printf("3 학년 학생입니다.");
    }else if(grade == 4) {
        char sexuality;

        printf("남성 : 'm' \t 여성 : 'f'\n");
        scanf(" %c", &sexuality);

        if(sexuality == 'm' && grade == 4) {
            printf("4 학년의 남성 학생");
        }else if(sexuality == 'f' && grade == 4) {
            printf("4 학년의 여성 학생");
        }else {
            printf("입력이 잘못 되었습니다.");
        }
    }else {
        printf("대상 학년이 아닙니다.");
    }
    return 0;
}