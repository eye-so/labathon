#include <stdio.h>

int input(int *n)
{
  printf("Enter n: ");
  scanf("%d", n);
}

int sum(int n)
{
  if(n==0) {
    return 0;
  }
  return sum(n-1) + n;
}

int main()
{
  int n;
  input(&n);
  printf("The sum of %d natural numbers is %d.", n, sum(n));
}
