#include <stdio.h>

void Message(char msg[]) {
    int i = 0;
    while (msg[i] != '\0') i++;
    if (i + 3 < 200) {
        msg[i++] = 'p';
        msg[i++] = 'o';
        msg[i++] = 's';
        msg[i] = '\0';
    }
}

int MaxScore(int rolls[], int count) {
    int max = rolls[0];
    for (int i = 1; i < count; i++) {
        if (rolls[i] > max) max = rolls[i];
    }
    return max;
}

void Utility(int rolls[], char msg[]) {
    int i;
    printf("\n--- Utility Output ---\n");
    for (i = 0; i < 50; i += 5) {
        int len = 0;
        while (msg[len] != '\0') len++;
        printf("Rolls %2d to %2d: ", i + 1, i + 5);
        if (len >= 5) {
            for (int j = len - 5; j < len; j++) {
                putchar(msg[j]);
            }
        } else {
            for (int j = 0; j < len; j++) {
                putchar(msg[j]);
            }
        }
        printf("\n");
    }
}

int main() {
    int rolls[50];
    char message[200] = "begin";
    int score = 0;

    for (int i = 0; i < 50; i++) {
        printf("Enter roll %d: ", i + 1);
        scanf("%d", &rolls[i]);

        if (i >= 1) {
            score = rolls[i] + rolls[i - 1];
            if (score > 0) {
                Message(message);
            } else if (score < 0) {
                int max = MaxScore(rolls, i + 1);
                printf("Negative score at roll %d. Max so far: %d\n", i + 1, max);
            }
        }
    }

    Utility(rolls, message);
    return 0;
}