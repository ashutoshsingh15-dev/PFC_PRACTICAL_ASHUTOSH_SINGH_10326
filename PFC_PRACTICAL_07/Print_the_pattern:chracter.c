#include <stdio.h>

int main() {
    
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