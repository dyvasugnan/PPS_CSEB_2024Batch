// max and min from 3 numbers
#include<stdio.h>
int main(){
  int n1,n2,n3;
  int max,min;
  printf("Enter 3 numbers\n");
  scanf("%d%d%d",&n1,&n2,&n3);
  printf("n1=%d n2=%d n3=%d\n",n1,n2,n3);
  if(n1>n2&&n1>n3)
      max=n1;
      
     else if(n2>n1&&n2>n3)
       max=n2;
  else
       max=n3;
       printf("max = %d\n",max);



  if(n1<n2)
     if(n1<n3)
        min = n1;
  else
     min = n3;
  if(n2<n1)
     if(n2<n3)
        min = n2;
  else
     min = n3;
     printf("min = %d\n",min);
       return 0;}       