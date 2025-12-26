#include <stdio.h>

int main() {
    printf("Name:- Ashutosh Singh\tERP:- RU-25-10326.\n");
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
// OUTPUT:
// Name:- Ashutosh Singh   ERP:- RU-25-10326.
// Enter the value n: 9
//         *
//        ***
//       *****
//      *******
//     *********
//    ***********
//   *************
//  ***************
// *****************
//  ***************
//   *************
//    ***********
//     *********
//      *******
//       *****
//        ***
//         *
// ashutoshsingh15agmail.com@Ashutoshs-MacBook-Air-3 PCF_PRACTICAL_07 % 