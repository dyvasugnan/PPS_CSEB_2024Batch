#include<stdio.h>
#include<stdbool.h>
bool palindrome(int);
int main()
{
	int num;
	bool x;
	printf("enter any number");
	scanf("%d",&num);
	x=palindrome(num);
	printf("%d",x);
	return 0;
}
bool palindrome(int num){
	int temp,rem,sum=0;
	temp=num;
	while(num!=0){
	        rem=num%10;
	        sum=sum*10+rem;
	        num=num/10;
    }
    if(temp==sum)
    return true;
    else
    return false;
}

