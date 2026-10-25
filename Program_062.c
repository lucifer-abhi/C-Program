/* Program 62: Print a Half Pyramid of Alphabets */
#include <stdio.h>
int main(void) {
    int n,i,j;
    printf("Enter number of rows (1-26): "); scanf("%d",&n);
    if(n<1 || n>26) { printf("Enter rows from 1 to 26\n"); return 0; }
    for(i=1;i<=n;i++) {
        for(j=0;j<i;j++) printf("%c ",'A'+j);
        printf("\n");
    }
    return 0;
}
