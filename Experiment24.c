// Program 24: Factorial Using Iteration
// Formula

// n!=n×(n−1)×(n−2)×⋯×1

// Example:

// 5! = 5 × 4 × 3 × 2 × 1 = 120

// Explanation
// fact = fact * i;
// Multiplies numbers one by one.
// Output
// Enter number: 5
// Factorial = 120
// Program

#include <stdio.h>

int main()
{
    int n, i;
    long fact = 1;

    printf("Enter number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    printf("Factorial = %ld", fact);

    return 0;
}