/* Program 99: Find the Square of a Number Using a Function */
#include <stdio.h>
int square(int n) { return n*n; }
int main(void) {
    int n;
    printf("Enter a number: "); scanf("%d",&n);
    printf("Square = %d\n",square(n));
    return 0;
}
