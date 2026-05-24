#include<stdio.h>
int main()
{
  int s=0,i,n;
  printf("enter the any digit:\n");
  scanf("%d",&n);
  while (n!=0)
  {
    i=n%10;
    s=s+i;
    n=n/10;
  }
  printf("sum of digit is=%d",s);
  return 0;
  
}