// 4. WAP in C for Linear Search
// Explanation
// Linear search checks elements one by one.
// found variable stores search result.
// break stops loop after finding element.

#include <stdio.h>

int main()
{
    int arr[100], n, i, item, found = 0;


    printf("Enter size of array: ");
    scanf("%d", &n);


    for(i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }


    printf("Enter element to search: ");
    scanf("%d", &item);


    for(i = 0; i < n; i++)
    {
        if(arr[i] == item)
        {
            found = 1;
            printf("Element found at position %d", i + 1);
            break;
        }
    }


    if(found == 0)
    {
        printf("Element not found");
    }


    return 0;
}