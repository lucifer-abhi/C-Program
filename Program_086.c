/* Program 86: Reverse a Number */
#include <stdio.h>
int main(void) {
    int n,sign=1,digit; long long reverse=0;
    printf("Enter an integer: "); scanf("%d",&n);
    if(n<0) { sign=-1; n=-n; }
    while(n>0) { digit=n%10; reverse=reverse*10+digit; n/=10; }
    printf("Reversed number = %lld\n",reverse*sign);
    return 0;
}
