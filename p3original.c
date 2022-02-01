#include<stdio.h>
void input(int *m,int *n)
{
  printf("enter two numbers\n");
  scanf("%d%d",m,n);
}

void sum(int a,int b,int *add)
{
  *add=a+b;
}

void output(int a,int b,int add)
{
  printf("your result of %d and %d is %d/n",a,b,add);
}

int main()
{
  int a,b,add;
  input(&a,&b);
  sum(a,b,&add);
  output(a,b,add);
  return 0;
}