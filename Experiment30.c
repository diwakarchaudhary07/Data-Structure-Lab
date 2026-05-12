// Program 30: Merge Two Sorted Arrays
// Theory

// Two sorted arrays merged into one sorted array.

// Example:

// Array 1: 1 3 5
// Array 2: 2 4 6

// Merged:
// 1 2 3 4 5 6
// Program
#include <stdio.h>

int main()
{
    int a[50], b[50], c[100];
    int n1, n2;
    int i = 0, j = 0, k = 0;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter sorted elements:\n");

    for(i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter sorted elements:\n");

    for(j = 0; j < n2; j++)
    {
        scanf("%d", &b[j]);
    }

    i = 0;
    j = 0;

    while(i < n1 && j < n2)
    {
        if(a[i] < b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }

        k++;
    }

    while(i < n1)
    {
        c[k] = a[i];
        i++;
        k++;
    }

    while(j < n2)
    {
        c[k] = b[j];
        j++;
        k++;
    }

    printf("Merged Array:\n");

    for(i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}