#include <stdio.h>

struct point{
  float x, y;
};

typedef struct point Point;

struct polygon{
  int no_of_points;
  Point points[6];
};

typedef struct polygon Polygon;

Polygon input()
{
  Polygon P;
  printf("Enter number of points of polygon: ");
  scanf("%d", &P.no_of_points);
  for(int i = 0; i < P.no_of_points; i++) {
    printf("Enter Next Point: ");
    scanf("%f%f", &P.points[i].x, &P.points[i].y);
  }
  return P;
}
   
void output(Polygon P)
{
  printf("The points in the polygon of %d points are: \n",  P.no_of_points);
  for(int i = 0; i < P.no_of_points; i++) {
    printf("(%.2f,%.2f)\n", P.points[i].x, P.points[i].y);
  }
}

int main()
{
  Polygon P;
  P = input();
  output(P);
  return 0;
}
