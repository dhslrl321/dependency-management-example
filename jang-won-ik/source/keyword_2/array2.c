#include <stdio.h>
#include <assert.h>

int main() {
    int a;

    scanf("%d", &a);

    int array[a];

    array[0] = 10;
    array[1] = 20;

    assert(array[0] == 10);
    assert(array[1] == 20);
}