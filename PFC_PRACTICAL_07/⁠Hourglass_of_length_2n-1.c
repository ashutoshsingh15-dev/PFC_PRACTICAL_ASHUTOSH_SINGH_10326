#include <stdio.h>

int main() {
    printf("Name:- Ashutosh Singh\tERP:- RU-25-10326.\n");
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = n; i >= 1; i--) {
        for(int j = i; j < n; j++)
            printf(" ");
        for(int k = 1; k <= (2*i - 1); k++)
            printf("*");
        printf("\n");
    }

    for(int i = 2; i <= n; i++) {
        for(int j = i; j < n; j++)
            printf(" ");
        for(int k = 1; k <= (2*i - 1); k++)
            printf("*");
        printf("\n");
    }
    return 0;
}
// OUTPUT:
// Name:- Ashutosh Singh   ERP:- RU-25-10326.
// Enter the value of n: 11
// *********************
//  *******************
//   *****************
//    ***************
//     *************
//      ***********
//       *********
//        *******
//         *****
//          ***
//           *
//          ***
//         *****
//        *******
//       *********
//      ***********
//     *************
//    ***************
//   *****************
//  *******************
// *********************
// ashutoshsingh15agmail.com@Ashutoshs-MacBook-Air-3 PCF_PRACTICAL_07 % 