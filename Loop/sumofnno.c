#include<stdio.h>
int main(){
  int i,n,s=0;
  printf("Enter the value of n:\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    s=s+i;
  }
  printf("Sum of series is =%d",s);
  return 0;
}