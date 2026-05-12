// Program 26: Fibonacci Series Using Iteration
// Formula

// F
// n
// 	​

// =F
// n−1
// 	​

// +F
// n−2
// 	​


// Series:

// 0 1 1 2 3 5 8 ...
// Program

#include <stdio.h>

int main()
{
    int n, a = 0, b = 1, c, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series:\n");

    printf("%d %d ", a, b);

    for(i = 3; i <= n; i++)
    {
        c = a + b;
        printf("%d ", c);

        a = b;
        b = c;
    }

    return 0;
}
