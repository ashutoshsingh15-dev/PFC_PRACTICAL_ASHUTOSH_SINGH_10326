#include <stdio.h>

int main()
{
    printf("Name:- Ashutosh Singh\tERP:- RU-25-10326.\n");
    int pin;
    printf("Enter PIN: ");
    scanf("%d", &pin);
    int correct_Pin = 4321;
    int attempts = 3;
    while (attempts > 0)
    {

        if (pin == correct_Pin)
        {
            printf("Access Granted");
            break;
        }
        else
        {
            attempts--;
            printf("Wrong PIN. Attempts left: %d\n", attempts);
        }
    }

    if (attempts == 0)
        printf("Card Blocked");

    return 0;
}
// OUTPUT:
// Name:- Ashutosh Singh	ERP:- RU-25-10326.
// Enter PIN: 4321
// Access Granted
