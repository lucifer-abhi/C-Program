/* Program 39: C Program to Print Alphabets Using a while Loop */
#include <stdio.h>
int main(void) {
    char ch = 'A';
    while (ch <= 'Z') {
        printf("%c ", ch);
        ch++;
    }
    printf("\n");
    return 0;
}
