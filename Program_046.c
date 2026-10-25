/* Program 46: WAP to Display the First N Natural Numbers and Their Sum */
#include <stdio.h>
int main(void) {
    int n, i, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    if (n < 1) {
        printf("Enter a positive integer\n");
        return 0;
    }
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
        sum += i;
    }
    printf("\nSum = %d\n", sum);
    return 0;
}
