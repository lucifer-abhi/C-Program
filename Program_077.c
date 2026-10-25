/* Program 77: Find the Sum of Elements in an Array */
#include <stdio.h>
int main(void) {
    int a[100],n,i; long long sum=0;
    printf("Enter number of elements (1-100): "); scanf("%d",&n);
    if(n<1 || n>100) { printf("Invalid size\n"); return 0; }
    printf("Enter elements: ");
    for(i=0;i<n;i++) { scanf("%d",&a[i]); sum+=a[i]; }
    printf("Sum = %lld\n",sum);
    return 0;
}
