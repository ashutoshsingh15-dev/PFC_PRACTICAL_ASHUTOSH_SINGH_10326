#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        if(i % 2 != 0)
            continue;
        sum = sum + i;
    }
    printf("Sum of even numbers = %d", sum);
    return 0;
}