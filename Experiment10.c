// 10. WAP in C to print diagonal elements and print their sum\

#include <stdio.h>
int main() {
    int a[3][3], i, j, sum = 0;
    printf("Enter 3x3 matrix:\n");
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++) scanf("%d", &a[i][j]);

    printf("Diagonals: ");
    for(i = 0; i < 3; i++) {
        printf("%d ", a[i][i]);
        sum += a[i][i];
    }
    printf("\nSum = %d", sum);
    return 0;
}