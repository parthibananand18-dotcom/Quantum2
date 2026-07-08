#include <stdio.h>
int main()
{
    int num1, num2;
    char op;
    printf("Enter a num1: ");
    scanf("%d", &num1);
    printf("Enter a num2: ");
    scanf("%d", &num2);
    printf("Enter operator: ");
    scanf("\n%c", &op);
    switch (op)
    {
    case '+':
        printf("Sum:%d", num1 + num2);
        break;
    case '-':
        printf("Diff:%d", num1 - num2);
        break;
    case '*':
        printf("Product:%d", num1 * num2);
        break;
    case '/':
        printf("Quotient:%d", num1 / num2);
        break;
    case '%':
        printf("Remainder:%d", num1 % num2);
        break;
    default:
        printf("Invalid operator");
    }
    return 0;
}


