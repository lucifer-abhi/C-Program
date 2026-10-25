/* Program 30: WAP to Find Maximum Between Two Numbers Using if-else */
#include <stdio.h>
int main(void) {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a > b) printf("%d is maximum\n", a);
    else if (b > a) printf("%d is maximum\n", b);
    else printf("Both numbers are equal\n");
    return 0;
}
