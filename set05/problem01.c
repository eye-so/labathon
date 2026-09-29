#include <stdio.h>
#include <math.h>

struct _point{
  float x;
  float y;
};

typedef struct _point Point;

Point input()
{
  Point p;
  printf("Enter coordinate x and y: ");
  scanf("%f%f", &p.x, &p.y);
  return p;
}

void dist(Point a, Point b, float *res)
{
  *res = sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

void output(Point a, Point b, float res)
{
  printf("The distance between (%.1f,%.1f) and (%.1f,%.1f) is %.1f \n", a.x, a.y, b.x, b.y, res);
  printf("The distance (till 6 decimal values) between (%f,%f) and (%f,%f) is %f", a.x, a.y, b.x, b.y, res);
}

int main()
{
  Point a, b;
  float res;
  a = input();
  b = input();
  dist(a, b, &res);
  output(a, b, res);
  return 0;
}
