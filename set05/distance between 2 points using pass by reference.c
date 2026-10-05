#include <stdio.h>
#include <math.h>

struct point {
  float x, y;
};

typedef struct point Point;

void input(Point *a, Point *b)
{
  printf("Enter co-ordinates of Point a: ");
  scanf("%f%f",&a->x, &a->y);
  printf("Enter co-ordinates of Point b: ");
  scanf("%f%f",&b->x, &b->y);
}

void find_distance(Point a, Point b, float *distance)
{
  *distance = sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

void output(Point a, Point b, float distance)
{
  printf("The distance between (%f,%f) and (%f,%f) is %f", a.x, a.y, b.x, b.y, distance);
}

int main()
{
  Point a, b;
  float distance;
  input(&a, &b);
  find_distance(a, b, &distance);
  output(a, b, distance);
  return 0;
}
