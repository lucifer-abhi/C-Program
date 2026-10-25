/* Program 56: Access Array Elements Using Pointers */
#include <stdio.h>
int main(void) {
    int a[5], i, *p=a;
    printf("Enter five integers: ");
    for(i=0;i<5;i++) scanf("%d",&a[i]);
    printf("Array elements using pointer:\n");
    for(i=0;i<5;i++) printf("%d ",*(p+i));
    printf("\n");
    return 0;
}
