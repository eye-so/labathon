#include <stdio.h>

struct fraction {
  int num, den;
};

typedef struct fraction Fraction;

Fraction input_fraction()
{
  Fraction f;
  printf("Enter numerator and denominator of fraction: ");
  scanf("%d%d", &f.num, &f.den);
  return f;
}

int find_gcd(int a, int b)
{
  int small = (a > b) ? b : a;
  int large = (a > b) ? a : b;
  while(small != 0)
  {
    int temp = small;
    small = large % small;
    large = temp;
  }
  return large;
}

Fraction add_fractions(Fraction f1, Fraction f2)
{
  int gcd = find_gcd(f1.den, f2.den);
  Fraction result;
  result.num = (f1.num * f2.den + f2.num * f1.den) / gcd;
  result.den = gcd;
  return result;
}

void output(Fraction f1, Fraction f2, Fraction sum)
{
  printf("The sum of %d/%d and %d/%d is %d/%d.", f1.num, f1.den, f2.num, f2.den, sum.num, sum.den);
}

int main()
{
  Fraction f1, f2, sum;
  f1 = input_fraction();
  f2 = input_fraction();
  sum = add_fractions(f1, f2);
  output();
}
