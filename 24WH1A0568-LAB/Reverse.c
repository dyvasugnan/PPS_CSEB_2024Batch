//reverse of a number
#include<stdio.h>
int main(){
int num;
int reverse=0,remainder;
printf("enter any number");
scanf("%d",&num);
while(num!=0){
remainder=num%10;
reverse=reverse*10+remainder;
num=num/10;
}
printf("%d",reverse);
return 0;
}
                                                                                                                                         
       

                                                                                                                                         
       
