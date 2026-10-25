/* Program 24: WAP to Check Whether an Alphabet Is Uppercase or Lowercase */
#include <stdio.h>
int main(void) {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if (ch >= 'A' && ch <= 'Z') printf("Uppercase alphabet\n");
    else if (ch >= 'a' && ch <= 'z') printf("Lowercase alphabet\n");
    else printf("Not an alphabet\n");
    return 0;
}
