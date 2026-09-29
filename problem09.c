#include <stdio.h>
#include <math.h>

float input()
{
  float n;
  printf("Enter number: ");
  scanf("%f", &n);
  return n;
}

float square_root(float n)
{
  float guess = n/2;
  float next_guess =  (guess + n/guess)/2;
 
  while(fabs(guess - next_guess) > 0.00001){
    guess = next_guess;
    next_guess = (guess + n/guess)/2;
  }
  return guess;
}

void output(float n, float sqrroot)
{
  printf("Square root of %.1f is %.1f \n", n, sqrroot);
  printf("The square root (till 6 decimal values) of %f is %f", n, sqrroot);
}

int main()
{
  float n, sqrroot;
  n = input();
  sqrroot = square_root(n);
  output(n, sqrroot);
}
