#include <stdio.h>

int main()
{
    char dept;
    int semester;

    printf("Select Department ('C' for CS, 'E' for EE, 'B' for Business): ");
    scanf(" %c", &dept);

    switch (dept)
    {
    case 'C':
    case 'c':
        printf("Enter Semester (1, 2, or 3): ");
        scanf("%d", &semester);
        switch (semester)
        {
        case 1:
            printf("Core Course: Programming Fundamentals\n");
            break;
        case 2:
            printf("Core Course: Object Oriented Programming\n");
            break;
        case 3:
            printf("Core Course: Data Structures & Algorithms\n");
            break;
        default:
            printf("Invalid semester!\n");
        }
        break;

    case 'E':
    case 'e':
        printf("Enter Semester (1, 2, or 3): ");
        scanf("%d", &semester);
        switch (semester)
        {
        case 1:
            printf("Core Course: Linear Circuit Analysis\n");
            break;
        case 2:
            printf("Core Course: Digital Logic Design\n");
            break;
        case 3:
            printf("Core Course: Signals and Systems\n");
            break;
        default:
            printf("Invalid semester!\n");
        }
        break;

    case 'B':
    case 'b':
        printf("Enter Semester (1, 2, or 3): ");
        scanf("%d", &semester);
        switch (semester)
        {
        case 1:
            printf("Core Course: Principles of Management\n");
            break;
        case 2:
            printf("Core Course: Financial Accounting\n");
            break;
        case 3:
            printf("Core Course: Principles of Marketing\n");
            break;
        default:
            printf("Invalid semester!\n");
        }
        break;

    default:
        printf("Invalid department!\n");
    }

    return 0;
}