// Program 28: GCD Using Recursion
// Theory

// GCD = Greatest Common Divisor

// Example:

// GCD of 12 and 18 = 6
// Program
#include <stdio.h>

int gcd(int a, int b)
{
    if(b == 0)
        return a;

    return gcd(b, a % b);
}

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("GCD = %d", gcd(a, b));

    return 0;
}
// Explanation
// gcd(b, a % b)

// Example:

// gcd(18,12)
// gcd(12,6)
// gcd(6,0)
// Answer = 6
// Output
// Enter two numbers: 12 18
// GCD = 6