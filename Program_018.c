/* Program 18: C Program to Print Height, Age, Roll Number and Grade */
#include <stdio.h>
int main(void) {
    int height;
    int age, roll;
    char grade;
    printf("Enter height in metres, age, roll number and grade: ");
    scanf("%d %d %d %c", &height, &age, &roll, &grade);
    printf("Height = %d m\nAge = %d\nRoll number = %d\nGrade = %c\n",
           height, age, roll, grade);
    return 0;
}
