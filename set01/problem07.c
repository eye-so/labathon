#include <stdio.h>

int input_n()
{
  int n;
  printf("Enter number of natural numbers in a row you want to add: ");
  scanf("%d", &n);
  return n;
}

int sum_n_nos(int n)
{
  int sum = 0;
  for(int i = 0; i < n+1; i++){
    sum = sum + i;
  }
  return sum;
}

void output(int n, int sum)
{
  printf("The sum of: ");
  for(int i = 1; i < n; i++){
    printf("%d+", i);
  }
  printf("%d is %d.", n, sum);
}

int main()
{
  int n, sum;
  n = input_n();
  sum = sum_n_nos(n);
  output(n, sum);
  return 0;
}
