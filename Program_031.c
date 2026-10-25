/* Program 31: C Program to Check Positive, Negative or Zero Using if-else */
#include <stdio.h>
int main(void) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n > 0) printf("Positive number\n");
    else if (n < 0) printf("Negative number\n");
    else printf("Zero\n");
    return 0;
}
