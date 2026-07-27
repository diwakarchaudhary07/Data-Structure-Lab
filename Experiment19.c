19. Find Duplicate Elements in Array
#include <stdio.h>

int main() {

    int arr[5], i, j;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Duplicate elements are:\n");

    for(i = 0; i < 5; i++) {

        for(j = i + 1; j < 5; j++) {

            if(arr[i] == arr[j]) {
                printf("%d ", arr[i]);
            }
        }
    }

    return 0;
}
Explanation
Compare every element with others.
Same elements are duplicates.

19. Find Duplicate Elements in Array
// #include <stdio.h>

// int main() {

//     int arr[5], i, j;

//     printf("Enter 5 elements:\n");

//     for(i = 0; i < 5; i++) {
//         scanf("%d", &arr[i]);
//     }

//     printf("Duplicate elements are:\n");

//     for(i = 0; i < 5; i++) {

//         for(j = i + 1; j < 5; j++) {

//             if(arr[i] == arr[j]) {
//                 printf("%d ", arr[i]);
//             }
//         }
//     }

//     return 0;
// }