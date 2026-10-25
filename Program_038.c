/* Program 38: WAP to Enter Month Number and Print Days Using if-else */
#include <stdio.h>
int main(void) {
    int month, year;
    printf("Enter month number (1-12) and year: ");
    scanf("%d %d", &month, &year);
    if (month < 1 || month > 12) printf("Invalid month\n");
    else if (month == 2) {
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
            printf("29 days\n");
        else printf("28 days\n");
    } else if (month == 4 || month == 6 || month == 9 || month == 11)
        printf("30 days\n");
    else printf("31 days\n");
    return 0;
}
