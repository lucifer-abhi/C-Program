/* Program 17: C Program to Swap Two Numbers Using a Temporary Variable */
#include <stdio.h>
int main(void) {
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    temp = a; a = b; b = temp;
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
