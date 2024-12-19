#include<stdio.h>
#include<math.h>
int main(){
  int i,n;
  printf("enter n,i");
  scanf("%d %d",&n,&i);
  int  x = pow(i,3);
  if (x==n)
   printf("yes it is cube");
   else
    printf("no it is not a cube");
	return 0;
	}
