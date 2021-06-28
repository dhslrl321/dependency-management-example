#include <stdio.h>
#include <assert.h>
int main() {
    int arr[3][2] = {
            {6, 3},
            {9, 1},
            {4, 7}
    };

    int (*pointer)[3] = arr;

    assert(&arr == pointer);
    assert(sizeof(arr) == 24);

    assert(*pointer == &arr[0]);
    assert(sizeof(*pointer) == 12);

    assert(*(*pointer) == arr[0][0]); // 첫 번째 배열 포인터의 요소

    return 0;
}