#include <assert.h>

int main() {
    int arr[] = {11, 22, 33, 44};

    int *pointer = arr;

    assert(&arr[0] == (pointer + 0));
    assert(arr[0] == *(pointer + 0));

    assert(&arr[1] == (pointer + 1));
    assert(arr[1] == *(pointer + 1));

    assert(&arr[2] == (pointer + 2));
    assert(arr[2] == *(pointer + 2));

    assert(&arr[3] == (pointer + 3));
    assert(arr[3] == *(pointer + 3));
}