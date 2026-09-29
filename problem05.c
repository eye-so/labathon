#include <stdio.h>

int input()
{
  int a;
  printf("Enter number: ");
  scanf("%d", &a);
  return a;
}

int compare(int a, int b, int c)
{
  if (a > b && a > c)
      return a;
  else if (b > a && b > c)
      return b;
  else
      return c;
}

void output(int a, int b, int c, int largest)
{
  printf("%d is the largest out of the numbers %d, %d and %d.", largest, a, b, c);
}

int main()
{
  int a, b, c, largest;
  a = input();
  b = input();
  c = input();
  largest = compare(a, b, c);
  output(a, b, c, largest);
  return 0;
}
