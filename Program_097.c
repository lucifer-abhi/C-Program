/* Program 97: Check Whether an Alphabet Is a Vowel or Consonant */
#include <stdio.h>
int main(void) {
    char ch;
    printf("Enter an alphabet: "); scanf(" %c",&ch);
    if(!((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')))
        printf("Not an alphabet\n");
    else if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
            ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        printf("Vowel\n");
    else printf("Consonant\n");
    return 0;
}
