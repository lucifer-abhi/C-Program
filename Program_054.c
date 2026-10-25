/* Program 54: Transpose of a Matrix */
#include <stdio.h>
int main(void) {
    int a[10][10], r, c, i, j;
    printf("Enter rows and columns (max 10): ");
    scanf("%d %d",&r,&c);
    if(r<1 || c<1 || r>10 || c>10) { printf("Invalid dimensions\n"); return 0; }
    printf("Enter matrix:\n");
    for(i=0;i<r;i++) for(j=0;j<c;j++) scanf("%d",&a[i][j]);
    printf("Transpose:\n");
    for(j=0;j<c;j++) {
        for(i=0;i<r;i++) printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;
}
