/* Program 80: Check Whether a String Is a Palindrome */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void) {
    char s[200]; int i,j,pal=1;
    printf("Enter a word (no spaces): "); scanf("%199s",s);
    i=0; j=(int)strlen(s)-1;
    while(i<j) {
        if(tolower((unsigned char)s[i])!=tolower((unsigned char)s[j])) { pal=0; break; }
        i++; j--;
    }
    if(pal) printf("Palindrome string\n"); else printf("Not a palindrome string\n");
    return 0;
}
