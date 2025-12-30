#include <stdio.h>

int main() {
    /*Ashutosh Singh ERP: 10326*/
    int r, c, i, j;
    int arr[10][10];
    int max, min;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of the 2D array:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    max = min = arr[0][0];

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            if(arr[i][j] > max)
                max = arr[i][j];
            if(arr[i][j] < min)
                min = arr[i][j];
        }
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d", min);

    return 0;
}
// OUTPUT:-
// Enter number of rows and columns: 2
// 3
// Enter elements of the 2D array:
// 1 2 3
// 4 5 6
// Maximum = 6
// Minimum = 1%                                                                                                                
// ashutoshsingh15agmail.com@Ashutoshs-MacBook-Air-3 PFC_PRACTICAL_10 % 

