/* Program 21: WAP to Input Length and Breadth and Find Rectangle Perimeter */
#include <stdio.h>
int main(void) {
    int length, breadth;
    printf("Enter length and breadth: ");
    scanf("%d %d", &length, &breadth);
    printf("Perimeter = %d\n", 2 * (length + breadth));
    return 0;
}
