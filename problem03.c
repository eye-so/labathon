#include <stdio.h>

int input()
{
  int a;
  printf("enter number for addition: ");
  scanf("%d", &a);
  return a;
}

int add(int a, int b)
{
  return a + b;
}

void output(int a, int b, int sum)
{
    printf("%d + %d = %d\n", a, b, sum);
}

int main()
{
  int a, b, sum;
  a = input();
  b = input();
  sum = add(a, b);
  output(a, b, sum);
}
