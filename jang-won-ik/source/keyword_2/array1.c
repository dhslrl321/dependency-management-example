#include <assert.h>

int main() {
    int student[] = {88, 89, 73, 65, 99, 100};

    assert(student[0] == 88); // 첫 번째 원소 0
    assert(student[3] == 65); // n 번째 원소 (찾으려는 원소 순서 - 1)
    assert(student[5] == 100); // 마지막 원소 (배열 길이 - 1)
}
