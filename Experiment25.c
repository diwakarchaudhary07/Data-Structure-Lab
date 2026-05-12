// Program 25: Factorial Using Recursion
// Theory

// Function calls itself repeatedly.

// Program
#include <stdio.h>

int factorial(int n)
{
    if(n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Factorial = %d", factorial(n));

    return 0;
}
// Explanation
return n * factorial(n - 1);

// Example:

// 5 * factorial(4)
// 4 * factorial(3)
// 3 * factorial(2)
// 2 * factorial(1)
// 1
// Output
// Enter number: 5
// Factorial = 120