#include<stdio.h>
 void swap(int * n1,int * n2)
{ 
      int temp=*n1;
         *n1=*n2;
         *n2=temp;
}  
 int main()
{
     int n1,n2;
     printf("enter first number:");
     scanf("%d",&n1);
     printf("enter second number:");
     scanf("%d",&n2);
    printf("beore swapping:\n");
    printf("number1:%d\n",n1);
    printf("number2:%d\n",n2);
         swap(&n1,&n2);
    printf("after swap:\n");
    printf("number1:%d\n",n1);
    printf("number2:%d\n",n2);
      return 0;
}
















