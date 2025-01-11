//armstrong number
#include<stdio.h>
#include<math.h>
int main(){
    int result=0,n,temp,reminder;
    printf("Enter a Three Digit Number:\n");
    scanf("%d",&n);
    temp=n;
    while(temp!=0){
        reminder=temp%10;
        result=result+pow(reminder,3);
        temp=temp/10;
    } 
    if(result==n){
        printf("%d is an Armstrong Number\n",n);
    } else{
        printf("%d is not an Armstrong Number\n",n);
    }
    return 0;
}
