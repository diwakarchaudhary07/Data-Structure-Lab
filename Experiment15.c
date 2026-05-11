15. PUSH Operation in Stack
#include <stdio.h>

#define SIZE 5

int stack[SIZE];
int top = -1;

int main() {

    int value;

    printf("Enter value to push: ");
    scanf("%d", &value);

    if(top == SIZE - 1) {
        printf("Stack Overflow");
    }
    else {
        top++;
        stack[top] = value;

        printf("Inserted element = %d", value);
    }

    return 0;
}
Explanation
Push inserts element in stack.
Overflow occurs when stack full.