#include <stdio.h>
int main() {
    int value;
    printf("Please enter a value in the range (1-7): ");
    scanf("%d", &value);

    switch (value) {
        case 1:
            printf("It's  Monday\n");
            break;
        case 2:
            printf("It's Tuesday\n");
            break;
        case 3:
            printf("It's Wednesday\n");
            break;
        case 4:
            printf("It's Thursday\n");
            break;
        case 5:
            printf("It's Friday\n");
            break;
        case 6:
            printf("It's Saturday\n");
            break;
        case 7:
            printf("It's Sunday\n");
            break;
        default:
            printf("You entered a value out of range");
    }

    return 0;
}
