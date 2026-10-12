#include <stdio.h>

struct fraction {
  int numerator, denominator;
};

typedef struct fraction Fraction;

Fraction input()
{
  Fraction f;
  printf("Enter the numerator and denominator: ");
  scanf("%d%d", &f.numerator, &f.denominator);
  return f;
}

Fraction add_fractions(Fraction f1, Fraction f2, Fraction f3)
{
  Fraction result;
  result.denominator = f1.denominator * f2.denominator *f3.denominator;
  result.numerator = f1.numerator * f2.denominator * f3.denominator + f2.numerator * f1.denominator *f3.denominator + f3.numerator * f1.denominator * f2.denominator;
  return result;
}

void output(Fraction f1, Fraction f2, Fraction f3, Fraction result)
{
  printf("The sum of %d/%d + %d/%d + %d/%d is %d/%d\n", f1.numerator, f1.denominator, f2.numerator, f2.denominator, f3.numerator, f3.denominator, result.numerator, result.denominator);
}

int main()
{  
  Fraction f1, f2, f3, result;
  f1 = input();
  f2 = input();
  f3 = input();
  result = add_fractions(f1, f2, f3);
  output(f1, f2, f3, result);
}
