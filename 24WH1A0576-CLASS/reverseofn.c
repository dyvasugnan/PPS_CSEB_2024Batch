//reverse of a number
#include<stdio.h>
int main(){
    int n,reverse=0,rem;  //rem=remainder
    printf("Enter a number:\n");
    scanf("%d",&n);
    while(n!=0){
        rem=n%10;
        reverse=reverse*10+rem;
        n=n/10;
    } 
    printf("Reverse of the Given Number is:%d",reverse);
    return 0;
}
