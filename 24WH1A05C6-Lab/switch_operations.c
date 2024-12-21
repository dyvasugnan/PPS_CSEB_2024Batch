//arithmetic operations
#include<stdio.h>
int main(){
    int n1,n2,num;
    char ch;
   printf("enter any two numbers\n");
   scanf("%d%d",&n1,&n2);
   do{
       printf("Menu\n1.addition\n2.subtraction\n3.multiplication\n4.division\n5.reminder\n6.exit\n");
        printf("enter any number\n");
        scanf("%d",&num);
        switch(num){
          case 1:{
              printf("addition\n");
              printf("%d + %d :%d\n",n1,n2,n1+n2);
              break;}
           case 2:{
              printf("subtraction\n");
              printf("%d - %d :%d\n",n1,n2,n1-n2);
              break;}
           case 3:{
              printf("multiplication\n");
              printf("%d * %d :%d\n",n1,n2,n1*n2);
              break;}
           case 4:{
              printf("division\n");
              printf("%d / %d :%d\n",n1,n2,n1/n2);
              break;}
           case 5:{
              printf("reminder\n");
              printf("%d\n",n1%n2);
              break;}
           case 6:{
              printf("exit\n");
              return 0;
               }
           default :{
              printf("not available\n");
               return 0;}}
         printf("do you want to continue y/n\n");
         scanf("\n%c",&ch);
           }while(ch!='n');
  return 0;}


              
