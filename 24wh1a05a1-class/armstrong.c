//finding whether the given no is armstrong or not using function
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool isarmstrong(int);
int main(){
    int num;
    printf("enter any no \n");
    scanf("%d",&num);
    bool result=isarmstrong(num);
    if(result==1){
    printf("%d is armstrong no",num);}
    else{
    printf("%d is not armstrong no",num);}
    return 0;
}
bool isarmstrong(int n){
    int count=0,sum=0,i,temp=n,tempt=n,r;
    while(n!=0){
        n=n/10;
        count=count++;
    }
    while(temp!=0){
        r=temp%10;
        sum=sum+pow(r,count);
        temp=temp/10;
            }
    if(sum==tempt){
    return true;}
    else{
    return false;
  }
}