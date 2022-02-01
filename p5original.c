#include<stdio.h>
int input()
{
  int a;
  printf("enter a number:");
  scanf("%d",&a);
  return a;
}
int emp(int a,int b,int c)
{
  if(a>b && b>c)
  {
    return a;
  }
else if(b>a && b>c)
{
  return b;
}
else
{
  return c;
}
}
void output(int a,int b,int c,int d)
{
  printf("from the given numbers %d,%d,%d.%d is the greatest",a,b,c,d);
}
int main()
{
  int a,b,c,d;
  a=input();
  b=input();
  c=input();
  d=emp(a,b,c);
  output(a,b,c,d);
  return 0;
}
