#include <math.h>
#include <stdio.h>

int main() {
  float principal, rate, time, simple_interest, compound_interest;
  int n; // number of times interest is compounded per year

  printf("Enter the principal amount: ");
  scanf("%f", &principal);

  printf("Enter the annual interest rate (in percentage): ");
  scanf("%f", &rate);

  printf("Enter the time (in years): ");
  scanf("%f", &time);

  printf("Enter the number of times interest is compounded per year: ");
  scanf("%d", &n);

  simple_interest = (principal * rate * time) / 100;

  compound_interest =
      principal * pow((1 + rate / (n * 100)), n * time) - principal;

  printf("\nResults:\n");
  printf("Simple Interest: %.2f\n", simple_interest);
  printf("Compound Interest: %.2f\n", compound_interest);
  return 0;
}
