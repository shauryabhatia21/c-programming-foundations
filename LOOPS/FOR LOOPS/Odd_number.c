#include <stdio.h>

int main() {
    int n;
    printf("enter Starting number: ");
    scanf("%d", &n);

    for (int i = n; i <= 50; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}