//to find an Adam Number
#include<stdio.h>
int reverse(int num);
int main(){
int num;
printf("Enter an Integer:\n");
scanf("%d",&num);//number is taken
int sqr=num*num;//we find its square
int rev_num= reverse(num);//we reverse number
int rev_sqr=reverse(rev_num*rev_num);//we find sqare of reversed num
if(sqr==rev_sqr){
    printf("%d is an Adam Number\n",num);
} 
else{
    printf("%d is not an Adam Number\n",num);
}
return 0;    
}
int reverse(int num){
    int rev=0;
    while(num!=0){
        rev=rev*10+num%10;
        num/=10;
    }
    return rev;
}
