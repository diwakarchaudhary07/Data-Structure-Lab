// 5. WAP in C to Implement Binary Search
// Explanation
// Works only on sorted array.
// mid = (low + high)/2 → Finds middle index.
// Search area becomes half every iteration.

#include <stdio.h>


int main()
{
    int arr[100], n, i, item;
    int low, high, mid;
    int found = 0;


    printf("Enter size of sorted array: ");
    scanf("%d", &n);


    for(i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }


    printf("Enter element to search: ");
    scanf("%d", &item);


    low = 0;
    high = n - 1;


    while(low <= high)
    {
        mid = (low + high) / 2;


        if(arr[mid] == item)
        {
            found = 1;
            printf("Element found at position %d", mid + 1);
            break;
        }
        else if(arr[mid] < item)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }


    if(found == 0)
    {
        printf("Element not found");
    }


    return 0;
}