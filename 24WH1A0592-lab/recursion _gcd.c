//To find the gcd of two numbers By using recursion
#include<stdio.h>
int gcd(int,int);
int main() {
    int a,b,result;
    printf("enter a,b values");
    scanf("%d %d",&a,&b);
    result=gcd(a,b);
    printf("result=%d",result);
}
int gcd(int a,int b) {
    if(a%b==0)
        return b;
    else
        return(gcd(b,a%b));
}