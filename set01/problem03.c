#include<stdio.h>
#include<math.h>
float input()
{
  float s;
  printf("enter the number:");
  scanf("%f",&s);
  return s;
}
float squareroot(float s)
{
  float guess=s/2;
  float next_guess=(guess+s/guess)/2;

while(fabs(guess-next_guess)>0.0001)
{
 guess=next_guess;
 next_guess=(guess+s/guess)/2;
}
return guess;
}
void output(float s,float root)
{
  printf("the squareroot of %f is %f\n",s,root);
}
int main()
{
  float s,root;
  s=input();
  root=squareroot(s);
  output(s,root);
  return 0;
}

  
  
