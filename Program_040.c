/* Program 40: C Program to Generate a Multiplication Table Using a while Loop */
#include <stdio.h>
int main(void) {
    int n, i = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (i <= 10) {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    }
    return 0;
}
