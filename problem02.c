//2. Write a C program to add two numbers.
#include <stdio.h>

void input(int *a, int *b)
{
    printf("Enter two numbers ");
    scanf("%d%d", a, b);
}

int add(int a, int b)
{
    return a+b;
}

void output(int a, int b, int sum)
{
    printf("%d + %d = %d\n", a, b, sum);
}

int process()
{
    int a, b, sum;
    input(&a, &b);
    sum = add(a, b);
    output(a, b, sum);
   
    return 0;
}

int main()
{
   printf("%d\n", process());
}
