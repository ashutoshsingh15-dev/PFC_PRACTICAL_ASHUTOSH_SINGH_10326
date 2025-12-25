#include <stdio.h>

int main()
{
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