#include <stdio.h>

int input()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  return n;
}

int count_bits1(int n)
{
  int flag = 1;
  int count = 0;
  for(int i = 0; i < sizeof(int)*8; i++) {
    if ( (n & flag)  > 0 ) {
      count += 1;
    }
    printf("flag = %d\n", flag);
    flag <<= 1;
  }
  return count;
}

int count_bits2(int n)
{
  int count = 0;
  while(n) {
    count += 1;
    n &= n-1;
  }
  return count;
}

void output(int n, int count)
{
  printf("The number of bits in %d is %d.\n", n, count);
}

int main()
{
  int n;
  n = input();
  printf("n = %d\n", n);
  int count;
  count = count_bits1(n);
  printf("count = %d\n", count);
  output(n, count);
  count = count_bits2(n);
  printf("count = %d\n", count);
  output(n, count);
}
