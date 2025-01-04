//given number is prime or not
#include<stdio.h>
int main(){
int count=0,num,i;
printf("enter any number:");
scanf("%d",&num);
for(i=2;i<num;i++){
if(num%i==0){
printf("%d is not a prime number",num);
count+=1;
break;
}
if(count==0){
printf("%d is prime number",num);
break;
}
}
}
