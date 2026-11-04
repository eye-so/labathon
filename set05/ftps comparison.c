#include <stdio.h>
#include <math.h>

int what_is_wrong ()
{
  float x = 0.0;
  for (int i=0; i<13; i++) {
    x += 17.0/13.0;
  } 
  printf("%f\n", x);
  if ( fabs(17.0 - x) < 0.0001) {
    return 1;
  }
  else {
    return 0;
  }
}

int main()
{
  int n = what_is_wrong();
  printf("n=%d\n",n);
}
