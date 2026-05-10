// 13. WAP in C to merge two 1D Arrays
C
#include <stdio.h>
int main() {
    int a[50], b[50], res[100], n1, n2, i;
    printf("Enter size of 1st array: "); scanf("%d", &n1);
    for(i=0; i<n1; i++) scanf("%d", &a[i]);
    
    printf("Enter size of 2nd array: "); scanf("%d", &n2);
    for(i=0; i<n2; i++) scanf("%d", &b[i]);

    for(i=0; i<n1; i++) res[i] = a[i]; // Copy first array
    for(i=0; i<n2; i++) res[n1 + i] = b[i]; // Copy second array after first

    printf("Merged Array: ");
    for(i=0; i<n1+n2; i++) printf("%d ", res[i]);
    return 0;
 }
// Explanation: We create a third array res.
//  We use one loop to copy all elements of a, 
//  and then a second loop to copy elements of b 
//  starting from the index where a ended (n1 + i).