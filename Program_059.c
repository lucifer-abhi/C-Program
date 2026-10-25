/* Program 59: Check Whether a Number Is an Armstrong Number */
#include <stdio.h>
int main(void) {
    int n, temp, digits=0, digit, i;
    long long sum=0, power;
    printf("Enter a non-negative integer: ");
    scanf("%d",&n);
    if(n<0) { printf("Enter a non-negative integer\n"); return 0; }
    temp=n;
    do { digits++; temp/=10; } while(temp>0);
    temp=n;
    do {
        digit=temp%10; power=1;
        for(i=0;i<digits;i++) power*=digit;
        sum+=power; temp/=10;
    } while(temp>0);
    if(sum==n) printf("Armstrong number\n"); else printf("Not an Armstrong number\n");
    return 0;
}
