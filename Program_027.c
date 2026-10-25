/* Program 27: C Program to Check Whether a Number Is Even or Odd */
#include <stdio.h>
int main(void) {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n % 2 == 0) printf("Even number\n");
    else printf("Odd number\n");
    return 0;
}
