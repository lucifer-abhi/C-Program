/* Program 43: C Program to Print a Multiplication Table Using a for Loop */
#include <stdio.h>
int main(void) {
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", n, i, n * i);
    return 0;
}
