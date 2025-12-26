#include <stdio.h>

void triangle(int n) {
    int i, j;
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
}

int main() {
    printf("Name:- Ashutosh Singh\tERP:- RU-25-10326.\n");
    int n;
    printf("Enter height: ");
    scanf("%d", &n);

    triangle(n);
    return 0;
}
// OUTPUT:
// Name:- Ashutosh Singh   ERP:- RU-25-10326.
// Enter height: 6
// *
// **
// ***
// ****
// *****
// ******
// ashutoshsingh15agmail.com@Ashutoshs-MacBook-Air-3 PFC_PRACTICAL_08 % 


