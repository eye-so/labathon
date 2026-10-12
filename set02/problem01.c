#include <stdio.h>

void input(float *base, float *height)
{
  printf("Please enter base of triangle: ");
  scanf("%f", base);
  printf("Please enter height of triangle: ");
  scanf("%f", height);
}

void find_area(float base , float height, float *area)
{
  *area = 0.5 * height * base;
}

void output(float base, float height, float area)
{
  printf("The area of the traingle with base %f and height %f is %f", base, height, area);
}

int main()
{
  float base, height, area;
  input(&base, &height);
  find_area(base, height, &area);
  output(base, height, area);
}
