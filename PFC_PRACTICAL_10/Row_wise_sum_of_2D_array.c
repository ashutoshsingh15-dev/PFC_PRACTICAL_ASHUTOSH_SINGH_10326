#include <stdio.h>

int main() {
    /*Ashutosh Singh ERP: 10326*/
    int r, c, i, j;
    int arr[10][10];
    int sum;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of the 2D array:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for(i = 0; i < r; i++) {
        sum = 0;
        for(j = 0; j < c; j++) {
            sum += arr[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    return 0;
}
// OUTPUT:-
// Enter number of rows and columns: 2
// 3
// Enter elements of the 2D array:
// 6 5 4
// 9 8 7
// Sum of row 1 = 15
// Sum of row 2 = 24
// ashutoshsingh15agmail.com@Ashutoshs-MacBook-Air-3 PFC_PRACTICAL_10 % 
