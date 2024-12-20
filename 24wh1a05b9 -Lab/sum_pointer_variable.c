#include<stdio.h>
 int main(){
  int a[100],num,i,sum=0;
  int *ptr=a;
   printf("enterthe sizeofarray");
    scanf("%d",&num);
   for(i=0;i<num;i++){
     scanf("%d",(ptr+i));
     }
    for(i=0;i<num;i++){
      sum=sum+*(ptr+i);
    }
     printf("sum of pointer variable:%d",sum);
         
      return 0;
       }
