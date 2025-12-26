#include <stdio.h>

int main() {
    printf("Name:- Ashutosh Singh\tERP:- RU-25-10326.\n");
    char ch = 'A' ; 
    for(int i = 1; i <= 4; i++) {
        for(int j = 0; j < i; j++) {
            printf("%c", ch);
            ch++;
        }
        printf("\n");
         ch = 'A' ;
    }
    return 0;
}
// OUTPUT:
// Name:- Ashutosh Singh   ERP:- RU-25-10326.
// A
// AB
// ABC
// ABCD
// ashutoshsingh15agmail.com@Ashutoshs-MacBook-Air-3 PCF_PRACTICAL_07 % 

