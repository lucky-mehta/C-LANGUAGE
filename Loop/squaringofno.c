#include<stdio.h>
int main(){
  int i,n,s;
  printf("Enter the value of n :\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    s=i*i;
    printf("%d=\n",s);
  }
  return 0;
}