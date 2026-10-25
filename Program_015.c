/* Program 15: C Program to Find the Area and Circumference of a Circle */
#include <stdio.h>
int main(void) {
    float r;
    const float PI = 3.14159f;
    printf("Enter radius: ");
    scanf("%f", &r);
    printf("Area = %.2f\n", PI * r * r);
    printf("Circumference = %.2f\n", 2 * PI * r);
    return 0;
}
