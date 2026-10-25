/* Program 79: Perform Addition Using a Bitwise Operation */
#include <stdio.h>
int main(void) {
    unsigned int a,b,sum,carry;
    printf("Enter two non-negative integers: ");
    scanf("%u %u",&a,&b);
    while(b!=0) {
        carry=a & b;
        a=a ^ b;
        b=carry << 1;
    }
    sum=a;
    printf("Sum = %u\n",sum);
    return 0;
}
