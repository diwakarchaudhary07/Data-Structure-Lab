16. POP Operation in Stack
#include <stdio.h>

#define SIZE 5

int stack[SIZE] = {10, 20, 30};
int top = 2;

int main() {

    if(top == -1) {
        printf("Stack Underflow");
    }
    else {
        printf("Deleted element = %d", stack[top]);
        top--;
    }

    return 0;
}
Explanation
POP removes top element.
Underflow occurs when stack empty