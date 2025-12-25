#include <stdio.h>

int main() {
    int n;
    printf("Enter the value n: ");
    scanf("%d", &n);
// Upper half of the diamond
    for(int i = 1; i <= n; i++) { // Rows
        for(int j = i; j < n; j++)// Spaces
            printf(" ");
        for(int k = 1; k <= (2*i - 1); k++) // Stars
            printf("*");
        printf("\n");
    }
// Lower half of the diamond
    for(int i = n-1; i >= 1; i--) { // Rows
        for(int j = n; j > i; j--) // Spaces
            printf(" ");
        for(int k = 1; k <= (2*i - 1); k++) // Stars
            printf("*"); 
        printf("\n");
    }
    return 0;
}