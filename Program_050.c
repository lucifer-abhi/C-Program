/* Program 50: WAP to Make a Simple Calculator Using switch-case */
#include <stdio.h>
int main(void) {
    int a, b;
    char op;
    printf("Enter expression (example: 8 + 2): ");
    scanf("%d %c %d", &a, &op, &b);
    switch (op) {
        case '+': printf("Result = %d\n", a + b); break;
        case '-': printf("Result = %d\n", a - b); break;
        case '*': printf("Result = %d\n", a * b); break;
        case '/':
            if (b != 0) printf("Result = %d\n", a / b);
            else printf("Error: division by zero\n");
            break;
        default: printf("Invalid operator\n");
    }
    return 0;
}
