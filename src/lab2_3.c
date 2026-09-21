#include <stdio.h>

/*
    Task:
    Write a function `int is_prime(int n)` that returns 1 if n is prime,
    0 otherwise.

    In main():
      - Ask user for an integer n (>= 2)
      - If invalid, print an error
      - Otherwise, print all prime numbers up to n
*/

int is_prime(int n) {
  int i;

  if (n < 2) {
    return 0;
  }

  for (i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return 0;
    }
  }

  return 1;
}

int main(void) {
  int n;
  int i;

  printf("Enter an integer n (>= 2): ");
  scanf("%d", &n);

  if (n < 2) {
    printf("Error: Entered number is below 2.\n");
    return 0;
  } else {
    for (i = 2; i <= n; i++) {
      if (is_prime(i)) {
        printf("%d\n", i);
      }
    }
  }

  return 0;
}