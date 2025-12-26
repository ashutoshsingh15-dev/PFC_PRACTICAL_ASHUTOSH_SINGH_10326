#include <stdio.h>

int sumOfDigits(int n) {
    int sum = 0;
    while(n > 0) {
        sum = sum + n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    printf("Name:- Ashutosh Singh\tERP:- RU-25-10326.\n");
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    printf("Sum of digits = %d", sumOfDigits(n));
    return 0;
}
// OUTPUT:Name:- Ashutosh Singh   ERP:- RU-25-10326.
// Enter the number: 6565
// Sum of digits = 22%                                                                                                    
// ashutoshsingh15agmail.com@Ashutoshs-MacBook-Air-3 PFC_PRACTICAL_08 % 



