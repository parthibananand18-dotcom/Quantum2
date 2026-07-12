#include <stdio.h>
int main()
{
  int n, i = 1, fact = 1;
  printf("Enter the value of n: ");
  scanf("%d", &n);
  do
  {
    fact = fact * i;
    i++;
  }
   while (i <= n);
  printf("Factorial of natural numbers: %d", fact);
  return 0;
}
