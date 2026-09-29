#include <stdio.h>

int input(int *a, int *b, int *c)
{
  printf("Enter three numbers: ");
  scanf("%d%d%d", a, b, c);
}

void compare(int a, int b, int c, int *largest)
{
  if (a > b && a > c)
      *largest = a;
  else if (b > a && b > c)
      *largest = b;
  else
      *largest = c;
}

void output(int a, int b, int c, int largest)
{
  printf("%d is the largest out of the numbers %d, %d and %d.", largest, a, b, c);
}

int main()
{
  int a, b, c, largest;
  input(&a, &b, &c);
  compare(a, b, c, &largest);
  output(a, b, c, largest);
  return 0;
}
