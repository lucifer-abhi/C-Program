/* Program 41: C Program to Print a Multiplication Table Using a do-while Loop */
#include <stdio.h>
int main(void) {
    int n, i = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    do {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    } while (i <= 10);
    return 0;
}
