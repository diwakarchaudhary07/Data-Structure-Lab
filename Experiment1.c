// 1. WAP in C to Create and Traverse 1D ArrayLine-by-Line Explanation
// #include <stdio.h> → Header file for input/output functions.
// int main() → Main function execution starts here.
// int arr[100], n, i; → Declares array and variables.
// printf() → Displays message.
// scanf() → Takes input from user.
// for loop → Used to input and display elements.
// return 0; → Ends program successfully.


#include <stdio.h>

int main()
{
    int arr[100], n, i;

    // Taking size of array from user
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    for(i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Display array elements
    printf("Array elements are:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}