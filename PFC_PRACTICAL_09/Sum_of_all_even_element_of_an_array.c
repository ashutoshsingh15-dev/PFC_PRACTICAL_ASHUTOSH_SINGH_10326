#include <stdio.h>

int main() {
    /*Ashutosh Singh ERP: 10326*/
    int n, i, sum = 0;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            sum += arr[i];
    }

    printf("Sum of even elements = %d", sum);

    return 0;
}

// OUTPUT:-
// Enter number of elements: 7
// Enter array elements:
// 44 34 24 23 75 66 45
// Sum of even elements = 168%                                                                                                 
// ashutoshsingh15agmail.com@Ashutoshs-MacBook-Air-3 PFC_PRACTICAL_09 % 
