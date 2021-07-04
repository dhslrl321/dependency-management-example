#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char *name;
    double score;
};

typedef struct Professor_s {
    int id;
    char *name;
    char major[20];
} Professor;

int main() {

    struct Student student = {21, "장O익", 4.5}; // struct 키워드 명시
    Professor professor; // struct 키워드 무시 & 구조체 변수 생성과 동시에 할당

    professor.id = 21; // 항목 연산자 . 를 이용하여 할당
    professor.name = "장O익";
    strcpy(professor.major, "정보보안");

    printf("%s", student.name);

    return 0;
}