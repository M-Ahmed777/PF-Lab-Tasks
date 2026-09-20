#include <stdio.h>

int main()
{
    char light, button;

    printf("Enter Traffic Light Color ('R' for Red, 'Y' for Yellow, 'G' for Green): ");
    scanf(" %c", &light);

    switch (light)
    {
    case 'R':
    case 'r':
        printf("Is pedestrian button pressed? ('Y' for Yes, 'N' for No): ");
        scanf(" %c", &button);
        switch (button)
        {
        case 'Y':
        case 'y':
            printf("Action: Stop and allow pedestrians to cross.\n");
            break;
        case 'N':
        case 'n':
            printf("Action: Stop and wait for green light.\n");
            break;
        default:
            printf("Invalid pedestrian button state!\n");
        }
        break;

    case 'Y':
    case 'y':
        printf("Action: Slow down and prepare to stop.\n");
        break;

    case 'G':
    case 'g':
        printf("Is pedestrian button pressed? ('Y' for Yes, 'N' for No): ");
        scanf(" %c", &button);
        switch (button)
        {
        case 'Y':
        case 'y':
            printf("Action: Go, but watch for pedestrians waiting to cross.\n");
            break;
        case 'N':
        case 'n':
            printf("Action: Go safely.\n");
            break;
        default:
            printf("Invalid pedestrian button state!\n");
        }
        break;

    default:
        printf("Invalid traffic light color!\n");
    }

    return 0;
}