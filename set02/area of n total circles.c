#include <stdio.h>

#include <stdio.h>

struct circle {
  float radius,area;
};

typedef struct circle Circle;

Circle input(int i)
{
  Circle c;
  printf("Enter radius of circle number %d: ", i+1);
  scanf("%f", &c.radius);
  return c;    
}

void input_n_circles(int n, Circle cs[n])
{
  for(int i=0; i<n; i++)
    {
      cs[i] = input(i);
    }
}

void compute_area(Circle *c)
{
  c->area = c->radius * c->radius * 3.14;
}

void compute_areas_of_n_circles(int n, Circle cs[n])
{
  for(int i=0; i<n; i++)
    {
      compute_area(&cs[i]);
    }
}
   
float find_sum_of_areas_of_n_circles(int n, Circle cs[n] )
{
  float total_area = 0;
  for(int i=0; i<n; i++) {
    total_area += cs[i].area;
  }
  return total_area;
}

void display_circle(int circle_no, Circle c)
{
  printf("Area of circle %d = %f\n", (circle_no+1), c.area);
}

void display_result (int n, Circle cs[n], float area)
{
  for(int i=0; i<n; i++) {
    display_circle(i, cs[i]);
  }  
  printf("Total area = %f\n", area);
}

int main()
{
  int n;
  printf("Enter the number of circles you want to add: ");
  scanf("%d", &n);
  Circle cs[n];    
  input_n_circles(n, cs);
  compute_areas_of_n_circles(n, cs);
  float total_area = find_sum_of_areas_of_n_circles(n, cs);
  display_result(n, cs, total_area);
  return 0;
}
