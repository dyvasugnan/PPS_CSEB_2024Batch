//to check a number is armstrong or not
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool armstrong_number(int);
int main(){
	int num;
	bool flag;
	printf("enter any number");
	scanf("%d",&num);
	flag=armstrong_number(num);
	if(flag)
	 printf("%d is an armstrong number \n",num);
	else
	 printf("%d is not an armstrong number \n",num);
	 return 0; 
}
bool armstrong_number(int num){
	int rem,temp,sum=0,count=0;
	temp=num;
	while(num!=0){
		num=num/10;
		count++;
	}
	num=temp;
	while(num!=0){
		sum+=pow(num%10,count);
		num/=10;
	}
	return(sum==temp);
}
