#include <stdio.h>

int main()
{
    float a, b, c;

    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        if (a == b)
        {
            if (b == c)
            {
                printf("Equilateral Triangle\n");
            }
            else
            {
                printf("Isosceles Triangle\n");
            }
        }
        else
        {
            if (b == c)
            {
                printf("Isosceles Triangle\n");
            }
            else
            {
                if (a == c)
                {
                    printf("Isosceles Triangle\n");
                }
                else
                {
                    printf("Scalene Triangle\n");
                }
            }
        }
    }
    else
    {
        printf("Not a valid triangle\n");
    }

    return 0;
}