#include <stdio.h>

int main()
{
    char account_type;
    int transaction;

    printf("Select Account Type ('1' for Savings, '2' for Current): ");
    scanf(" %c", &account_type);

    switch (account_type)
    {
    case '1':
        printf("\n--- Savings Account ---\n1. Deposit\n2. Withdraw\n3. Check Balance\nSelect transaction (1-3): ");
        scanf("%d", &transaction);
        switch (transaction)
        {
        case 1:
            printf("Action: Depositing funds into Savings Account.\n");
            break;
        case 2:
            printf("Action: Withdrawing funds from Savings Account (subject to withdrawal limit).\n");
            break;
        case 3:
            printf("Action: Checking Savings Account Balance.\n");
            break;
        default:
            printf("Invalid transaction choice for Savings Account!\n");
        }
        break;

    case '2':
        printf("\n--- Current Account ---\n1. Deposit\n2. Withdraw\n3. Check Balance\nSelect transaction (1-3): ");
        scanf("%d", &transaction);
        switch (transaction)
        {
        case 1:
            printf("Action: Depositing funds into Current Account.\n");
            break;
        case 2:
            printf("Action: Withdrawing funds from Current Account (overdraft facility available).\n");
            break;
        case 3:
            printf("Action: Checking Current Account Balance.\n");
            break;
        default:
            printf("Invalid transaction choice for Current Account!\n");
        }
        break;

    default:
        printf("Invalid Account Type selected!\n");
    }

    return 0;
}