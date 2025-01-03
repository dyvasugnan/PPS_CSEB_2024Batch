//a number is said to be a strong no if sum of factorial of its digits is equal to it
//program to find whether the no is strong no or not
#include<stdio.h>
int factorial(int);
int main(){
int num,sum=0,temp;
printf("enter any number\n");
scanf("%d",&num);
temp=num;
int rem;
while(num!=0)
{  rem=num%10;
sum=sum+factorial(rem);
num=num/10;
}
if(sum==temp){
printf("%d is strong number",temp);}
else{
    printf("%d is not strong number",temp);
}
return 0;
}
int factorial(int n){
    int p=1;
    for(int i=0;i<n;i++){
        p=p*i;
    }
    return p;
}