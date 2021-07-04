#include <stdio.h>
#include <assert.h>
int main() {
    int arr[3][2] = {
            {11, 22},
            {33, 44},
            {55, 66},
    };

    int (*pointer)[2] = arr;

    printf("%d\n", **pointer);
    printf("%d\n", *(*pointer + 1));

    printf("%d\n", *(*(pointer + 1) + 0));
    printf("%d\n", *(*(pointer + 1) + 1));

    printf("%d\n", *(*(pointer + 2) + 0));
    printf("%d\n", *(*(pointer + 2) + 1));

    return 0;
}