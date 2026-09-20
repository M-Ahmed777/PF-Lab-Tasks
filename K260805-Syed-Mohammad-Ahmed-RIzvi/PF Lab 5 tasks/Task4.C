#include <stdio.h>

int main()
{
    int units;
    char type;
    float bill = 0.0;

    printf("Enter connection type ('D' for Domestic, 'C' for Commercial): ");
    scanf(" %c", &type);
    printf("Enter total units consumed: ");
    scanf("%d", &units);

    if (type == 'D' || type == 'd')
    {
        if (units <= 100)
        {
            bill = units * 5.0;
        }
        else
        {
            if (units <= 300)
            {
                bill = (100 * 5.0) + ((units - 100) * 7.5);
            }
            else
            {
                bill = (100 * 5.0) + (200 * 7.5) + ((units - 300) * 10.0);
            }
        }
        printf("Total Domestic Bill: $%.2f\n", bill);
    }
    else
    {
        if (type == 'C' || type == 'c')
        {
            if (units <= 100)
            {
                bill = units * 8.0;
            }
            else
            {
                if (units <= 300)
                {
                    bill = (100 * 8.0) + ((units - 100) * 11.0);
                }
                else
                {
                    bill = (100 * 8.0) + (200 * 11.0) + ((units - 300) * 15.0);
                }
            }
            printf("Total Commercial Bill: $%.2f\n", bill);
        }
        else
        {
            printf("Invalid connection type entered.\n");
        }
    }

    return 0;
}