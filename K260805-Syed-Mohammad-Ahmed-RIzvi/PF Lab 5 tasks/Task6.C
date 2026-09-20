#include <stdio.h>
#include <math.h>

int main()
{
    int mode;
    float num1, num2, result;
    char op, single_op;

    printf("Select Mode:\n1. Basic Arithmetic\n2. Power/Root\nEnter mode (1 or 2): ");
    scanf("%d", &mode);

    switch (mode)
    {
    case 1:
        printf("Enter operator (+, -, *, /): ");
        scanf(" %c", &op);
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);

        switch (op)
        {
        case '+':
            printf("Result: %.2f\n", num1 + num2);
            break;
        case '-':
            printf("Result: %.2f\n", num1 - num2);
            break;
        case '*':
            printf("Result: %.2f\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
            {
                printf("Result: %.2f\n", num1 / num2);
            }
            else
            {
                printf("Error: Division by zero!\n");
            }
            break;
        default:
            printf("Invalid arithmetic operator!\n");
        }
        break;

    case 2:
        printf("Enter operation ('s' for square, 'r' for square root): ");
        scanf(" %c", &single_op);
        printf("Enter a number: ");
        scanf("%f", &num1);

        switch (single_op)
        {
        case 's':
        case 'S':
            printf("Result: %.2f\n", num1 * num1);
            break;
        case 'r':
        case 'R':
            if (num1 >= 0)
            {
                printf("Result: %.2f\n", sqrt(num1));
            }
            else
            {
                printf("Error: Cannot calculate square root of a negative number!\n");
            }
            break;
        default:
            printf("Invalid operation choice!\n");
        }
        break;

    default:
        printf("Invalid mode selected!\n");
    }

    return 0;
}