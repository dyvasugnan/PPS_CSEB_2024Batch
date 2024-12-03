//sum of n natural numvers
#include <stdio.h>
int sum_of_natural_numbers(int);
int main(){
int number,sum;
printf("Enter the value of a number \n");
scanf("%d",&number);
sum=sum_of_natural_numbers(number);
printf("sum: %d \n",sum);
}
int sum_of_natural_numbers(int number){
int sum=0,i;
for(i=0;i<=number;i++){
sum=sum+i;
}
return sum;
}