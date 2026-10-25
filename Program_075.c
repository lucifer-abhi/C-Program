/* Program 75: Find the Area of a Rectangle and a Triangle */
#include <stdio.h>
int main(void) {
    int length,breadth,base,height;
    printf("Enter rectangle length and breadth: "); scanf("%d %d",&length,&breadth);
    printf("Area of rectangle = %d\n",length*breadth);
    printf("Enter triangle base and height: "); scanf("%d %d",&base,&height);
    printf("Area of triangle = %d\n",0.5f*base*height);
    return 0;
}
