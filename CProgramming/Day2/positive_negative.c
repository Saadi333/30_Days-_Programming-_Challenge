#include <stdio.h>

int main() {
    double number;

    // Prompt the user to enter a number
    printf("10: ");
    scanf("%lf", &number);

    // Check if the number is positive, negative, or zero
    if (number > 0) {
        printf("%.2lf is positive.\n", number);
    } else if (number < 0) {
        printf("%.2lf is negative.\n", number);
    } else {
        printf("%.2lf is zero.\n", number);
    }

    return 0;
}
