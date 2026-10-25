/* Program 33: C Program to Check Alphabet Using ASCII Values */
#include <stdio.h>
int main(void) {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
        printf("It is an alphabet\n");
    else printf("It is not an alphabet\n");
    return 0;
}
