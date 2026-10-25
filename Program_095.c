/* Program 95: Calculate Percentage and Grade from Five Subject Marks */
#include <stdio.h>
int main(void) {
    int m[5],total=0,percentage; int i;
    printf("Enter marks for five subjects (each out of 100): ");
    for(i=0;i<5;i++) {
        scanf("%d",&m[i]);
        if(m[i]<0 || m[i]>100) { printf("Invalid marks\n"); return 0; }
        total+=m[i];
    }
    percentage=total/5;
    printf("Total = %d/500\nPercentage = %d%%\n",total,percentage);
    if(percentage>=90) printf("Grade A+\n");
    else if(percentage>=80) printf("Grade A\n");
    else if(percentage>=70) printf("Grade B\n");
    else if(percentage>=60) printf("Grade C\n");
    else if(percentage>=50) printf("Grade D\n");
    else printf("Grade F\n");
    return 0;
}
