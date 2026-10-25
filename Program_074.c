/* Program 74: Find the Area of a Triangle */
#include <stdio.h>
int main(void) {
    int base,height;
    printf("Enter base and height: "); scanf("%d %d",&base,&height);
    printf("Area of triangle = %d\n",0.5f*base*height);
    return 0;
}
