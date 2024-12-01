//palindrome function using function (with both return value and argument)
#include<stdio.h>
#include<stdbool.h>
bool ispalindrome(int);
int main(){
    int num;
    printf("enter any number \n");
    scanf("%d",&num);
    bool x=ispalindrome(num);
    if(x==1){
        printf("%d is palindrome ",num);
    }
    else{
        printf("%d is not palindrome",num);
    }
    return 0;
}
bool ispalindrome(int n){
    
        int sum,temp,rem;
        
        sum=0;
        temp=n;
        while(n!=0){
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
        }
    
    
    
    
      if(sum==temp){
        return true;
    }
    else{
        return false;
    }
}

