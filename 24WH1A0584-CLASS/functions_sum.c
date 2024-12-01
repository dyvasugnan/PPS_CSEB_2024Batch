//sum of two numbers in funtions//

#include<stdio.h>
int sum(int,int);
int main(){
    int a,b,result;
    printf ("Enter a,b values\n");
    scanf("%d%d",&a,&b);
    result=sum(a,b);
    printf("sum=%d\n",result);
    return 0;
}
int sum(int a,int b){
    int temp=a+b;
    return temp;
}