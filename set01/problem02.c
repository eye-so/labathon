#include<stdio.h>
void input(int *a,int *b)
{
  
  printf("enter two numbers");
  scanf("%d %d",a,b);
}
int add(int *a,int *b,int *result)
{
  *result=*a+*b;
  return *result;
}
void output(int final_output)
{
  printf("the sum of two numbers is:%d",final_output);
}
int main()
{
  int a,b,result,final_output;
  input(&a,&b);
  final_output=add(&a,&b,&result);
  output(final_output);
  return 0;
}


