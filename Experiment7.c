// 7. WAP in C to Implement Selection Sort

#include <stdio.h>

int main()
{
    int arr[100], n, i, j, min, temp;

    printf("Enter size of array: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n - 1; i++)
    {
        min = i;

        for(j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    printf("Sorted array:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}