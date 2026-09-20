#include <stdio.h>

int main()
{
    int category, item;

    printf("Menu Categories:\n1. Beverages\n2. Main Course\n3. Desserts\nSelect category (1-3): ");
    scanf("%d", &category);

    switch (category)
    {
    case 1:
        printf("\n--- Beverages ---\n1. Coffee ($3.50)\n2. Iced Tea ($2.50)\n3. Fresh Juice ($4.00)\nPick an item: ");
        scanf("%d", &item);
        switch (item)
        {
        case 1:
            printf("Item: Coffee | Price: $3.50\n");
            break;
        case 2:
            printf("Item: Iced Tea | Price: $2.50\n");
            break;
        case 3:
            printf("Item: Fresh Juice | Price: $4.00\n");
            break;
        default:
            printf("Invalid beverage item selected!\n");
        }
        break;

    case 2:
        printf("\n--- Main Course ---\n1. Cheeseburger ($8.99)\n2. Pasta Alfredo ($11.50)\n3. Grilled Chicken ($12.00)\nPick an item: ");
        scanf("%d", &item);
        switch (item)
        {
        case 1:
            printf("Item: Cheeseburger | Price: $8.99\n");
            break;
        case 2:
            printf("Item: Pasta Alfredo | Price: $11.50\n");
            break;
        case 3:
            printf("Item: Grilled Chicken | Price: $12.00\n");
            break;
        default:
            printf("Invalid main course item selected!\n");
        }
        break;

    case 3:
        printf("\n--- Desserts ---\n1. Chocolate Cake ($5.00)\n2. Ice Cream Sundae ($4.50)\n3. Cheesecake ($6.00)\nPick an item: ");
        scanf("%d", &item);
        switch (item)
        {
        case 1:
            printf("Item: Chocolate Cake | Price: $5.00\n");
            break;
        case 2:
            printf("Item: Ice Cream Sundae | Price: $4.50\n");
            break;
        case 3:
            printf("Item: Cheesecake | Price: $6.00\n");
            break;
        default:
            printf("Invalid dessert item selected!\n");
        }
        break;

    default:
        printf("Invalid menu category!\n");
    }

    return 0;
}