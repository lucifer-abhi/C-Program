/* Program 23: WAP to Enter P, T and R and Calculate Simple Interest */
#include <stdio.h>
int main(void) {
    int p, t, r;
    printf("Enter principal, time in years and rate: ");
    scanf("%d %d %d", &p, &t, &r);
    printf("Simple Interest = %d\n", p * t * r / 100);
    return 0;
}
