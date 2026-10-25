/* Program 37: C Program to Enter Five Subject Marks and Find Percentage and Grade */
#include <stdio.h>
int main(void) {
    int a, b, c, d, e, total, percentage;
    printf("Enter marks in five subjects (each out of 100): ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    if (a<0||a>100||b<0||b>100||c<0||c>100||d<0||d>100||e<0||e>100) {
        printf("Invalid marks\n");
        return 0;
    }
    total = a + b + c + d + e;
    percentage = total / 5;
    printf("Total = %d/500\nPercentage = %d%%\n", total, percentage);
    if (percentage >= 90) printf("Grade A+\n");
    else if (percentage >= 80) printf("Grade A\n");
    else if (percentage >= 70) printf("Grade B\n");
    else if (percentage >= 60) printf("Grade C\n");
    else if (percentage >= 50) printf("Grade D\n");
    else printf("Grade F\n");
    return 0;
}
