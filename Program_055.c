/* Program 55: Print the Fibonacci Series */
#include <stdio.h>
int main(void) {
    int n, i;
    unsigned long long a=0, b=1, next;
    printf("How many terms (1-93): ");
    scanf("%d",&n);
    if(n<1 || n>93) { printf("Enter a value from 1 to 93\n"); return 0; }
    for(i=0;i<n;i++) {
        printf("%llu ",a);
        next=a+b; a=b; b=next;
    }
    printf("\n");
    return 0;
}
