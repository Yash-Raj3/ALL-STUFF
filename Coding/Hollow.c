#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the hollow square: ");
    scanf("%d", &size);
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            if (i == 1 || i == size || j == 1 || j == size) {
                printf("Y ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
