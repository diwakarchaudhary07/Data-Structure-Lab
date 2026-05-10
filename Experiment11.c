11. WAP in C to print upper triangular matrix
An upper triangular matrix is one where all elements below the main diagonal are zero.

Explanation: The condition i <= j identifies elements on or above the diagonal.
 If the row index i is greater than the column index j,
  the position is below the diagonal, so we print 0.

#include <stdio.h>
int main() {
    int a[3][3], i, j;
    printf("Enter 3x3 matrix elements:\n");
    for(i=0; i<3; i++)
        for(j=0; j<3; j++) scanf("%d", &a[i][j]);

    printf("Upper Triangular Matrix:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            if(i <= j) printf("%d ", a[i][j]);
            else printf("0 ");
        }
        printf("\n");
    }
    return 0;
}