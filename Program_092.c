/* Program 92: Check Whether a Number Is Negative, Positive or Zero */
#include <stdio.h>
int main(void) {
    int n;
    printf("Enter a number: "); scanf("%d",&n);
    if(n>0) printf("Positive number\n");
    else if(n<0) printf("Negative number\n");
    else printf("Zero\n");
    return 0;
}
