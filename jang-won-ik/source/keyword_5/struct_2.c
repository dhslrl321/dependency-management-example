#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int age;
    char name[10];
    int *numberPointer;
} Student;

int main() {
    Student *pointer = malloc(sizeof(Student));

    pointer -> age = 25;
    strcpy(pointer -> name, "장원익");

    printf("이름: %s \n", pointer -> name);
    printf("나이: %d", pointer -> age);

    free(pointer);

    return 0;
}