18. Dequeue Operation in Queue
#include <stdio.h>

int queue[5] = {10, 20, 30};
int front = 0;
int rear = 2;

int main() {

    if(front > rear) {
        printf("Queue Underflow");
    }
    else {
        printf("Deleted = %d", queue[front]);
        front++;
    }

    return 0;
}
Explanation
Removes element from front side.