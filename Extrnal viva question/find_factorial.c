#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check negative number
    if(n < 0) {
        printf("Factorial of negative number does not exist");
    } else {
        // Calculate factorial
        for(i = 1; i <= n; i++) {
            factorial = factorial * i;
        }

        // Display result
        printf("Factorial of %d = %lld", n, factorial);
    }

    return 0;
}