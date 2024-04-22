#include <stdio.h>

int main() {
    double num1, num2;
    double sum, average;

    // Prompt the user to enter the first number
    printf("10.5: ");
    scanf("%lf", &num1);

    // Prompt the user to enter the second number
    printf("20.7: ");
    scanf("%lf", &num2);

    // Calculate the sum of the two numbers
    sum = num1 + num2;

    // Calculate the average of the two numbers
    average = sum / 2.0;

    // Display the sum and average
    printf("Sum of %.2lf and %.2lf = %.2lf\n", num1, num2, sum);
    printf("Average of %.2lf and %.2lf = %.2lf\n", num1, num2, average);

    return 0;
}
