/* Program 98: Store Student Information Using a Union */
#include <stdio.h>
union StudentInfo { int roll; int marks; char name[30]; };
int main(void) {
    union StudentInfo s;
    printf("Enter student roll number: "); scanf("%d",&s.roll);
    printf("Roll number = %d\n",s.roll);
    printf("Enter student marks: "); scanf("%d",&s.marks);
    printf("Marks = %d\n",s.marks);
    printf("A union shares memory; each new assignment overwrites the previous member.\n");
    return 0;
}
