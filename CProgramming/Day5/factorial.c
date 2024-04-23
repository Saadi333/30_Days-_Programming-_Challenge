#include <stdio.h>

int main() {
  int number, factorial = 1;

  // Prompt user for input
  printf("Enter a non-negative integer: ");

  // Read input and check for negative number
  if (scanf("%d", &number) != 1 || number < 0) {
    printf("Invalid input: Please enter a non-negative integer.\n");
    return 1;  // Indicate error
  }

  // Calculate factorial using a loop
  for (int i = 1; i <= number; i++) {
    factorial *= i;
  }

  // Print the result
  printf("The factorial of %d is %d\n", number, factorial);

  return 0;  // Indicate successful execution
}
