// 12. WAP in C to print lower triangular matrix
// A lower triangular matrix has all elements above the main diagonal set to zero.
// C
#include <stdio.h>
int main() {
    int a[3][3], i, j;
    printf("Enter 3x3 matrix elements:\n");
    for(i=0; i<3; i++)
        for(j=0; j<3; j++) scanf("%d", &a[i][j]);

    printf("Lower Triangular Matrix:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            if(i >= j) printf("%d ", a[i][j]);
            else printf("0 ");
        }
        printf("\n");
    }
    return 0;
}
// Explanation: Here, the condition i >= j identifies elements on or below the diagonal. 
// Any element where i < j (row index less than column index)
//  is above the diagonal and printed as 0.