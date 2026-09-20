#include <stdio.h>

int main()
{
    int age;
    char day;

    printf("Enter customer age: ");
    scanf("%d", &age);
    printf("Enter day ('W' for weekday, 'H' for weekend/holiday): ");
    scanf(" %c", &day);

    if (age < 12 || age > 60)
    {
        if (day == 'W' || day == 'w')
        {
            printf("Ticket Price: $8 (Discounted Weekday Rate)\n");
        }
        else
        {
            printf("Ticket Price: $10 (Discounted Weekend Rate)\n");
        }
    }
    else
    {
        if (day == 'W' || day == 'w')
        {
            printf("Ticket Price: $12 (Regular Weekday Rate)\n");
        }
        else
        {
            printf("Ticket Price: $15 (Regular Weekend Rate)\n");
        }
    }

    return 0;
}