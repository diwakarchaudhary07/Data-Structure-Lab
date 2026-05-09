// 2. WAP in C to Find Minimum Element From an Array
// Explanation
// min = arr[0] → Assume first element is minimum.
// if(arr[i] < min) → Compare each element.
// min = arr[i] → Update minimum value.

#include <stdio.h>

int main()
{
    int arr[100], n, i, min;


    printf("Enter size of array: ");
    scanf("%d", &n);


    for(i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }


    min = arr[0];


    for(i = 1; i < n; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }


    printf("Minimum element is: %d", min);


    return 0;
}