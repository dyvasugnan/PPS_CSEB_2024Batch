// sum of n natural numbers
// using functions
#include<stdio.h>
int sum_of_natural_numbers(int);
int main(){
int number,sum;
printf("enter number value");
scanf("%d",&number);
sum=sum_of_natural_numbers(number);
printf("sum: %d \n",sum);
}
int sum_of_natural_numbers(int number){
int sum=0,i;
for(i=0;i<=number;i++){
sum =sum+i;
}
return sum;
}