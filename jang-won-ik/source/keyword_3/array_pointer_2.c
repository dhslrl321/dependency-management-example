#include <assert.h>
#include <stdio.h>

int main() {
    int arr[] = {11, 22, 33, 44};

    int *pointer = arr;

    printf("%010x", pointer + 0);
    printf("%010x", pointer + 1);
    printf("%010x", pointer + 2);
    printf("%010x", pointer + 3);

    return 0;
}


