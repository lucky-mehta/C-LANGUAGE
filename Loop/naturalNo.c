#include<stdio.h>
int main()
{
  int i,n;
  printf("Enter the limit of series:\n");
  scanf("%d",&n);
  for (i=1; i<=n; i++)
  {
    printf("natural number is = %d\n" ,i);
  }
  return 0;
}