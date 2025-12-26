#include <stdio.h>

int main() {
    printf("Name:- Ashutosh Singh\tERP:- RU-25-10326.\n");
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        if(i % 2 != 0)
            continue;
        sum = sum + i;
    }
    printf("Sum of even numbers = %d", sum);
    return 0;
}
// OUTPUT:
// Name:- Ashutosh Singh	ERP:- RU-25-10326.
// Enter n: 66
// Sum of even numbers = 1122