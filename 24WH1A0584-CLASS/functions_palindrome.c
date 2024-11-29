//palindrome in function//

#include<stdio.h>
#include<stdbool.h>
bool palindrome(int);
int main(){
    int n;
    bool num;
    printf ("Enter any number\n");
    scanf ("%d",&n);
    num=palindrome(n);
    printf ("%d",num);
    return 0;
}
bool palindrome(int n){
    int rem,temp,reverse=0;
    temp=n;
    while(n!=0){
        rem=n%10;
        n=n/10;
        reverse=reverse*10+rem;
    }
    if(reverse==temp)
        return 1;
    else
        return 0;
}