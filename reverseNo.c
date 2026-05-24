#include<stdio.h>
int main()
{
  int i,n,rev=0;
  printf("enter the any number:\n");
  scanf("%d",&n);
  while (n!=0)
  {
    i=n%10;
    rev=rev*10+i;
    n=n/10;
  }
  printf("reverse no is=%d",rev);
  return 0;
}