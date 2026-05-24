#include <stdio.h>
int main(){
  int l,b,P;
  printf("ENTER THE VALUE OF LENGHT AND BREATH : \n");
  scanf("%d%d",&l,&b);
  P = 2*(l+b);
  printf("Perimeter of rectangle is = %d" ,P);
  return 0;
}