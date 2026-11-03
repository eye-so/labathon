#include <stdio.h>

int input()
{
  int n;
  printf("Enter a number\n");
  scanf("%d", &n);
  return n;
}

int count_bits(int n)
{  
  int count = 0;
  printf("From right to left, going through each bit of the number:\n");
  for(int i=0; i < sizeof(n)*8; i++){
    printf("%d", n&0x1);
    if ((n & 0x1) == 0x1) {
      count += 1;
    }
    n >>= 1;
  }
  printf("\n");
  return count;
}

int output(int n, int count)
{
  printf("The number of bits in %d is %d.\n", n, count);
}

int main()
{
    int n;
    n = input();
    int count = count_bits(n);
    output(n, count);
    return 0;
}
