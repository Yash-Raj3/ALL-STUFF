#include <stdio.h>

int main() {
    int i, j, k;
    int n = 7;  

    for (i = 0; i < n; i++) {
        
        for (j = 0; j < n - i; j++) {
            printf("%c ", 'A' + j);
        }

       
        for (k = 0; k < 2 * i - 1; k++) {
            printf("  ");
        }
        for (j = n - i -1; j >= 0; j--) {
            if (i == 0 && j == n - 1) continue;
            printf("%c ", 'A' + j);
        }

        printf("\n");
    }

    return 0;
}