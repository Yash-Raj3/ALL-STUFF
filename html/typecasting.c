#include <stdio.h>

int main() {
    int num1, num2;

    // Get input from the user
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Implement the Euclidean algorithm using a while loop
    while (num1 != num2) {
        if (num1 > num2) {
            num1 -= num2; // Subtract the smaller number from the larger one
        } else {
            num2 -= num1; // Subtract the smaller number from the larger one
        }
    }

    // After the loop, num1 (or num2) will contain the HCF
    printf("The HCF of the two numbers is: %d\n", num1);

    return 0;
}