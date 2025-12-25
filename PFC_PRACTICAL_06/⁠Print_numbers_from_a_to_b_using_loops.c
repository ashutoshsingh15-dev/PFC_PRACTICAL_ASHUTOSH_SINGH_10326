#include <stdio.h>

int main() {
    int a;
    printf("Enter the number a : ");
    scanf("%d ", &a);
    int b;
    printf("Enter the number b : ");
    scanf("%d", &b);
    for(int i = a; i <= b; i++) {
        printf("%d ", i);
    }
    return 0;
}