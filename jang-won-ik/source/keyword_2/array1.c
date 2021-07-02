#include <assert.h>

int top = 0;

void push(int data, int array[]) {
    array[top++] = data;
}

int pop(int array[]) {
    return array[--top];
}

int main() {

    int stack[4];

    push(7, stack);

    assert(stack[0] == 7);

    int first = pop(stack);

    assert(first == 1);

    return 0;
}

// assignment : 스택이 비어있는지, 꽉 차있는지