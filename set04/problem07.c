#include <stdio.h>

struct fraction {
  int num, den;
};

typedef struct fraction Fraction;

Fraction input_fraction()
{
  Fraction f;
  printf("Enter numerator of fraction: ");
  scanf("%d", &f.num);
  printf("Enter denominator of fraction: ");
  scanf("%d", &f.den);  
  return f;
}

int find_gcd(int a, int b)
{
  
}
Fraction add_fractions(Fraction f1, Fraction f2)
void output(Fraction f1, Fraction f2, Fraction f3, Fraction sum)
