#include <assert.h>
#include <stdlib.h>

int main() {

    int number = 100;

    int *pointer1 = &number;
    int *pointer2 = malloc(sizeof(number));

    *pointer2 = number;

    assert(*pointer1 == *pointer2);

    free(pointer2);
    return 0;
}