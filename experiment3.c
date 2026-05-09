// 3. WAP in C to Calculate Sum of Elements in 1D Array
// Explanation
// sum = 0 → Initialize sum.
// sum = sum + arr[i] → Add each element.


#include <stdio.h>

int main()
{
    int arr[100], n, i, sum = 0;


    printf("Enter size of array: ");
    scanf("%d", &n);


    for(i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }


    for(i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }


    printf("Sum of array elements = %d", sum);


    return 0;
}