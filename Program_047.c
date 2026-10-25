/* Program 47: WAP to Display Multiplication Tables Vertically from 1 to N */
#include <stdio.h>
int main(void) {
    int n, i, j;
    printf("Enter the last table number: ");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= n; j++) printf("%4d", j * i);
        printf("\n");
    }
    return 0;
}
