/* Program 60: Store Student Information Using a Structure */
#include <stdio.h>
struct Student { int roll; char name[50]; int marks; };
int main(void) {
    struct Student s;
    printf("Enter roll number, name (no spaces) and marks: ");
    scanf("%d %49s %d",&s.roll,s.name,&s.marks);
    printf("Student details:\nRoll number: %d\nName: %s\nMarks: %d\n",
           s.roll,s.name,s.marks);
    return 0;
}
