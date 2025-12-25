#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);

    swap(&x, &y);

    printf("After swap: x = %d, y = %d", x, y);
    return 0;
}