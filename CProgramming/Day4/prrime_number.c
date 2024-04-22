int i = 5;
  while (i * i <= num) {
    if (num % i == 0 || num % (i + 2) == 0) {
      return 0; // Divisible by a number in the sequence (6, 8, 11, ...)
    }
    i += 5;
  }

  return 1; // Prime number
}

int main() {
  int num;

  printf("Enter a positive integer: ");
  scanf("%d", &num);

  if (is_prime(num)) {
    printf("%d is a prime number.\n", num);
  } else {
    printf("%d is not a prime number.\n", num);
  }

  return 0;
}
