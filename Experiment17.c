17. Enqueue Operation in Queue
#include <stdio.h>

#define SIZE 5

int queue[SIZE];
int rear = -1;

int main() {

    int value;

    printf("Enter value: ");
    scanf("%d", &value);

    if(rear == SIZE - 1) {
        printf("Queue Overflow");
    }
    else {
        rear++;
        queue[rear] = value;

        printf("Inserted = %d", value);
    }

    return 0;
}
Explanation
Queue follows FIFO.
Enqueue inserts at rear.