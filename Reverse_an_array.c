#include <stdio.h>

int main() {
    /*Ashutosh Singh ERP: 10326*/
    int n, i;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Reversed array:\n");
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}

// OUTPUT:-
// Enter number of elements: 6
// Enter array elements:
// 12 21 33 42 55 45 
// Reversed array:
// 45 55 42 33 21 12 %                                                                                                         
// ashutoshsingh15agmail.com@Ashutoshs-MacBook-Air-3 PFC_PRACTICAL_09 % 

