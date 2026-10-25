/* Program 88: Print the Program Name and All Command-Line Arguments */
#include <stdio.h>
int main(int argc, char *argv[]) {
    int i;
    printf("Program name: %s\n",argv[0]);
    printf("Arguments:\n");
    for(i=1;i<argc;i++) printf("%s\n",argv[i]);
    return 0;
}
