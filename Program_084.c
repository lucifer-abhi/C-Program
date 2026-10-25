/* Program 84: Find Factorial Using Recursion */
#include <stdio.h>
unsigned long long factorial(unsigned int n) {
    if(n<=1) return 1;
    return n*factorial(n-1);
}
int main(void) {
    int n;
    printf("Enter a number (0-20): "); scanf("%d",&n);
    if(n<0 || n>20) { printf("Enter a number from 0 to 20\n"); return 0; }
    printf("Factorial = %llu\n",factorial((unsigned int)n));
    return 0;
}
