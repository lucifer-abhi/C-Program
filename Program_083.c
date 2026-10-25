/* Program 83: Convert Celsius to Fahrenheit */
#include <stdio.h>
int main(void) {
    int c,f;
    printf("Enter temperature in Celsius: "); scanf("%d",&c);
    f=(c*9.0f/5.0f)+32;
    printf("Temperature in Fahrenheit = %d\n",f);
    return 0;
}
