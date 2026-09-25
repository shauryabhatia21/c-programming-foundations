#include <stdio.h>

int main() {
    int a;
    printf("ENTER YOUR NUMBER: ");
    scanf("%d", &a);

    for (int i = 1; i <= 10; i++) {
        printf("%d\n", i * a);
    }
    return 0;
}

