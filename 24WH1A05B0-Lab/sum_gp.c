//sum of the geometric progression
#include<stdio.h>
#include<math.h>
int main() {
  int n,x,sum=0,i=0;
  printf("the number for gp and the end of gp");
  scanf("%d %d",&n,&x);
  while(i<n){
  sum = sum + pow(x,i);
  i++;
  }
  printf(" sum of gp is :%d",sum);
  return 0;
}
