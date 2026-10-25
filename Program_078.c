/* Program 78: Delete an Element from an Array */
#include <stdio.h>
int main(void) {
    int a[100],n,i,pos;
    printf("Enter number of elements (1-100): "); scanf("%d",&n);
    if(n<1 || n>100) { printf("Invalid size\n"); return 0; }
    printf("Enter elements: ");
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    printf("Enter position to delete (1-%d): ",n); scanf("%d",&pos);
    if(pos<1 || pos>n) { printf("Invalid position\n"); return 0; }
    for(i=pos-1;i<n-1;i++) a[i]=a[i+1];
    n--;
    printf("Array after deletion: ");
    for(i=0;i<n;i++) printf("%d ",a[i]);
    printf("\n");
    return 0;
}
