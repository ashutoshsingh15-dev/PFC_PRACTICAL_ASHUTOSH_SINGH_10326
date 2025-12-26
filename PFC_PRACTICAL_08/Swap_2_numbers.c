#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    printf("Name:- Ashutosh Singh\tERP:- RU-25-10326.\n");
    int x, y;
    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);

    swap(&x, &y);

    printf("After swap: x = %d, y = %d", x, y);
    return 0;
}
// OUTPUT:
// Name:- Ashutosh Singh   ERP:- RU-25-10326.
// Enter x and y: 3
// 7
// After swap: x = 7, y = 3%                                                                                              
// ashutoshsingh15agmail.com@Ashutoshs-MacBook-Air-3 PFC_PRACTICAL_08 % 

