#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[100];
    printf("Enter String: ");
    scanf(" %[^\n]", str);  // Reads full line including spaces

    int len = strlen(str);
    int i = 0;

    while (i < len) {
        // Skip spaces
        while (i < len && str[i] == ' ') i++;

        int start = i;

        // Find end of word
        while (i < len && str[i] != ' ') i++;

        int end = i - 1;

        // Reverse the word in-place
        reverseWord(&str[start], &str[end]);
    }

    printf("Reversed words: %s\n", str);
    return 0;
}
