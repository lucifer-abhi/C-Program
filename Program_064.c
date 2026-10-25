/* Program 64: Print Two Floating-Point Numbers */
#include <stdio.h>
int main(void) {
    float a,b;
    printf("Enter two floating-point numbers: ");
    scanf("%f %f",&a,&b);
    printf("First number = %.2f\nSecond number = %.2f\n",a,b);
    return 0;
}
