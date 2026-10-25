/* Program 71: Find the Size of a Union */
#include <stdio.h>
union Data { int i; int f; char ch; };
int main(void) {
    printf("Size of union Data = %zu bytes\n",sizeof(union Data));
    return 0;
}
