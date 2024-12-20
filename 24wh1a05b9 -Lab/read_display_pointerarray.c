#include<stdio.h>
 int main(){
   int a[100],num,i;
    printf("enter the number");
     scanf("%d",&num);
    int *ptr=a;
    printf("enter the elements");
     for(i=0;i<num;i++){
      scanf("%d",(ptr+i));
       }
    printf(" the elements");
     for(i=0;i<num;i++){
      printf("%d",*(ptr+i));
       }

      return 0;
    }
