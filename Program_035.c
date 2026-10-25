/* Program 35: C Program to Enter a Week Number and Print the Day */
#include <stdio.h>
int main(void) {
    int day;
    printf("Enter week number (1=Monday, 7=Sunday): ");
    scanf("%d", &day);
    switch (day) {
        case 1: printf("Monday\n"); break;
        case 2: printf("Tuesday\n"); break;
        case 3: printf("Wednesday\n"); break;
        case 4: printf("Thursday\n"); break;
        case 5: printf("Friday\n"); break;
        case 6: printf("Saturday\n"); break;
        case 7: printf("Sunday\n"); break;
        default: printf("Invalid week number\n");
    }
    return 0;
}
