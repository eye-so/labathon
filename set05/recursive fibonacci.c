#include <stdio.h>

void input(int *n)
{
  printf("Enter n: ");
  scanf("%d", n);
}

void fibonacci(int n, int a, int b)
{
  if (n == 0) {
    return;
  }
  printf("%d\n", a);
  fibonacci(n - 1, b, a + b);
}

int main()
{
  int n;
  input(&n);
  fibonacci(n, 0, 1);
  return 0;
}
