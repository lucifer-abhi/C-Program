/* Program 65: Print the ASCII Value of a Character */
#include <stdio.h>
int main(void) {
    char ch;
    printf("Enter a character: "); scanf(" %c",&ch);
    printf("ASCII value of %c = %d\n",ch,(unsigned char)ch);
    return 0;
}
