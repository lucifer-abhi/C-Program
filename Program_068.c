/* Program 68: Check Whether Two Numbers Are Equal */
#include <stdio.h>
int main(void) {
    int a,b;
    printf("Enter two numbers: "); scanf("%d %d",&a,&b);
    if(a==b) printf("Numbers are equal\n"); else printf("Numbers are not equal\n");
    return 0;
}
