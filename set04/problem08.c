#include <stdio.h>

struct fraction {
  int num, den;
};

typedef struct fraction Fraction;

int input_n()
{
  int n;
  printf("Enter number of fractions you want to add: ");
  scanf("%d", &n);
  return n;
}

Fraction input_fraction()
{
  Fraction f;
  printf("Enter numerator and denominator of fraction: ");
  scanf("%d%d", &f.num, &f.den);
  return f;
}

void input_n_fractions(int n, Fraction f[n])
{
  for(int i = 0; i < n; i++){
    f[i] = input_fraction();
  }
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
  Fraction result;
  result.num = f1.num * f2.den + f2.num * f1.den;
  result.den = f1.den * f2.den;
  int gcd = find_gcd(result.num, result.den);
  result.num /= gcd;
  result.den /= gcd;
  return result;
}

Fraction add_n_fractions(int n, Fraction f[n])
{
  Fraction sum = f[0];
  for(int i = 1; i < n; i++){
    sum = add_fractions(sum, f[i]);
  }
  return sum;
}

void output(int n, Fraction f[n], Fraction sum)
{
  for(int i = 0; i < n-1; i++){
    printf("%d/%d + ", f[i].num, f[i].den);
  }
  printf("%d/%d = %d/%d", f[n-1].num, f[n-1].den, sum.num, sum.den);
} 

int main()
{
  int n = input_n();
  Fraction f[n], sum;
  input_n_fractions(n, f);
  sum = add_n_fractions(n, f);
  output(n, f, sum);
}
