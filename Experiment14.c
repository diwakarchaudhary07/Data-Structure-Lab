// 14. WAP in C to create STACK using array
C
#include <stdio.h>
#define SIZE 5
int stack[SIZE], top = -1;

void display() {
    if(top == -1) printf("Stack is empty\n");
    else {
        for(int i=top; i>=0; i--) printf("%d ", stack[i]);
        printf("\n");
    }
}

int main() {
    printf("Stack created with size %d.\n", SIZE);
    display();
    return 0;
}
// Explanation: A stack is a LIFO (Last In, First Out) structure.
//  We use a top variable initialized to -1 to indicate the stack is empty.
//   The SIZE defines the limit of the array.