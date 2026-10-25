/* Program 53: Add Two Matrices */
#include <stdio.h>
int main(void) {
    int a[10][10], b[10][10], i, j, r, c;
    printf("Enter rows and columns (max 10): ");
    scanf("%d %d",&r,&c);
    if (r<1 || c<1 || r>10 || c>10) { printf("Invalid dimensions\n"); return 0; }
    printf("Enter first matrix:\n");
    for(i=0;i<r;i++) for(j=0;j<c;j++) scanf("%d",&a[i][j]);
    printf("Enter second matrix:\n");
    for(i=0;i<r;i++) for(j=0;j<c;j++) scanf("%d",&b[i][j]);
    printf("Sum matrix:\n");
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) printf("%d ",a[i][j]+b[i][j]);
        printf("\n");
    }
    return 0;
}
