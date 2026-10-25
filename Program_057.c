/* Program 57: Check Whether a Number Is a Palindrome */
#include <stdio.h>
int main(void) {
    int n, original, reverse=0, digit;
    printf("Enter a non-negative integer: ");
    scanf("%d",&n);
    if(n<0) { printf("Negative numbers are not considered here.\n"); return 0; }
    original=n;
    while(n>0) { digit=n%10; reverse=reverse*10+digit; n/=10; }
    if(original==reverse) printf("Palindrome number\n");
    else printf("Not a palindrome number\n");
    return 0;
}
