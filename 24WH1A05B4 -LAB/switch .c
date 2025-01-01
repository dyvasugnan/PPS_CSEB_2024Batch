#include<stdio.h>
int main(){
    int a,b;
    int choice;
printf("enter your choice\n");   
printf("1.addition\n2.substraction\n3.multiplication\n4.divison"); 
scanf("%d",&choice);
printf("enter two integer numbers\n");
scanf("%d%d",&a,&b);
switch(choice){
       case 1:
            printf("%d+%d=%d\n",a,b,(a+b));
               break;
       case 2: 
            printf("%d-%d=%d\n",a,b,(a-b));
               break;
       case 3:
            printf("%d*%d=%d\n",a,b,(a*b));
               break;
       case 4:
            if(b!=0)
              printf("%d/%d=%d\n",a,b,(a/b));
              else
              printf("number can't be divided by 0\n");
       default:printf("you entered wrong choice");     
       }
return 0;
}






