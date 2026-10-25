/* Program 16: C Program to Calculate the Area of an Ellipse */
#include <stdio.h>
int main(void) {
    float a, b;
    const float PI = 3.14159f;
    printf("Enter semi-major and semi-minor axes: ");
    scanf("%f %f", &a, &b);
    printf("Area of ellipse = %.2f\n", PI * a * b);
    return 0;
}
