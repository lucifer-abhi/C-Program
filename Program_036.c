/* Program 36: C Program to Calculate Profit or Loss */
#include <stdio.h>
int main(void) {
    int cost, selling;
    printf("Enter cost price and selling price: ");
    scanf("%d %d", &cost, &selling);
    if (selling > cost) printf("Profit = %d\n", selling - cost);
    else if (cost > selling) printf("Loss = %d\n", cost - selling);
    else printf("No profit, no loss\n");
    return 0;
}
