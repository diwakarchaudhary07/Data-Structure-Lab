// Program 23: Insert Node at Specific Position
// Theory

// Node inserted between two nodes.

// Before:

// 10 -> 30 -> NULL

// After inserting 20:

// 10 -> 20 -> 30 -> NULL
// Program


#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head, *second, *newnode, *temp;

    // First node
    head = (struct node*)malloc(sizeof(struct node));

    // Second node
    second = (struct node*)malloc(sizeof(struct node));

    head->data = 10;
    head->next = second;

    second->data = 30;
    second->next = NULL;

    // New node
    newnode = (struct node*)malloc(sizeof(struct node));

    newnode->data = 20;

    // Insert in middle
    newnode->next = second;
    head->next = newnode;

    // Print list
    temp = head;

    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}
