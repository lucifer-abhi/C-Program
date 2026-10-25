/* Program 82: Demonstrate a Union with an Example */
#include <stdio.h>
#include <string.h>
union StudentData { int roll; int marks; char name[30]; };
int main(void) {
    union StudentData s;
    s.roll=101;
    printf("Roll number = %d\n",s.roll);
    s.marks=87.5f;
    printf("Marks = %d\n",s.marks);
    strcpy(s.name,"Amit");
    printf("Name = %s\n",s.name);
    printf("Note: a union shares memory, so only its most recently assigned member is valid.\n");
    return 0;
}
