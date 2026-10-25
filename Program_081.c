/* Program 81: Create a File and Store Information in It */
#include <stdio.h>
int main(void) {
    FILE *fp=fopen("student.txt","w");
    if(fp==NULL) { printf("Unable to create file\n"); return 1; }
    fprintf(fp,"This information is stored in a file.\n");
    fclose(fp);
    printf("Information written to student.txt\n");
    return 0;
}
