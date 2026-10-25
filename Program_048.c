/* Program 48: WAP to Find the Factorial of a Number */
#include <stdio.h>
int main(void) {
    int n, i;
    unsigned long long fact = 1;
    printf("Enter a number (0-20): ");
    scanf("%d", &n);
    if (n < 0 || n > 20) {
        printf("Enter a number from 0 to 20\n");
        return 0;
    }
    for (i = 1; i <= n; i++) fact *= i;
    printf("Factorial = %llu\n", fact);
    return 0;
}
