#include <stdio.h>

void triangle(int n) {
    int i, j;
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter height: ");
    scanf("%d", &n);

    triangle(n);
    return 0;
}