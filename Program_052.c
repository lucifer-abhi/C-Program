/* Program 52: Store Five Values in an Array */
#include <stdio.h>
int main(void) {
    int a[5], i;
    printf("Enter five integers: ");
    for (i=0;i<5;i++) scanf("%d",&a[i]);
    printf("Array elements: ");
    for (i=0;i<5;i++) printf("%d ",a[i]);
    printf("\n");
    return 0;
}
