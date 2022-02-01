#include <stdio.h>

int input()
{
  int x;
  printf("enter the number");
  scanf("%d",&x);
  return x;
}

int add(int a,int b)
{
  int c;
  c=a+b;
  return c;
}



int output(int a, int b,int c)
{
  printf("your result of a and b is %d+%d=%d",a,b,c);

}

int main()
{
  int a,b,c;
  a=input();
  b=input();
  c=add(a,b);
  output(a,b,c);
  return 0;
}