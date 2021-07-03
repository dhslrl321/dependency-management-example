#include <stdio.h>
#include <assert.h>

int main() {

    int arr[3][2] = {
            {11, 22},
            {33, 44},
            {55, 66},
    };

    int (*pointer)[2] = arr;

    assert(&arr[0][0] == *pointer);
    assert(&arr[0][1] == *pointer + 1);

    assert(&arr[1][0] == *(pointer + 1));
    assert(&arr[1][1] == *(pointer + 1) + 1);

    assert(&arr[2][0] == *(pointer + 2));
    assert(&arr[2][1] == *(pointer + 2) + 1);

    return 0;
}