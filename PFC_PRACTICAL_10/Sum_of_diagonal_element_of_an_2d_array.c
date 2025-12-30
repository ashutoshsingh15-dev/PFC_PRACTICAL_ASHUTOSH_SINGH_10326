#include <stdio.h>

int main() {
    /*Ashutosh Singh ERP: 10326*/
    int n, i, j;
    int arr[10][10];
    int sum = 0;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        sum += arr[i][i];
    }

    printf("Sum of diagonal elements = %d", sum);

    return 0;
}
// OUTPUT:-
// Enter size of square matrix: 3
// Enter elements of the matrix:
// 3 2 1
// 7 6 5
// 9 0 7
// Sum of diagonal elements = 16%                                                                                              
// ashutoshsingh15agmail.com@Ashutoshs-MacBook-Air-3 PFC_PRACTICAL_10 % 
