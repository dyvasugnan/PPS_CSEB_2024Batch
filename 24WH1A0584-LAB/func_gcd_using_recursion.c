// finding gcd using recursion /_

#include<stdio.h>
int gcd(int,int);
int main(){
    int n1,n2,res;
    printf("Enter any two numbers\n");
    scanf("%d%d",&n1,&n2);
    res=gcd(n1,n2);
    printf("gcd of 2 numbers=%d",res);
    return 0;
}
int gcd(int n1,int n2){
    if(n2==0)
        return n1;
    return gcd(n2,n1%n2);
}
