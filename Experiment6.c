// 6. WAP in C to Implement Bubble Sort
// Explanation
// Bubble sort compares adjacent elements.
// Larger elements move toward end.
// temp variable used for swapping.

#include <stdio.h>

int main()
{
    int arr[100], n, i, j, temp;


    printf("Enter size of array: ");
    scanf("%d", &n);


    for(i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }


    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }


    printf("Sorted array:\n");


    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }


    return 0;
}