/* Program 45: WAP to Compute the Sum of the First 10 Natural Numbers */
#include <stdio.h>
int main(void) {
    int i, sum = 0;
    for (i = 1; i <= 10; i++) sum += i;
    printf("Sum of first 10 natural numbers = %d\n", sum);
    return 0;
}
