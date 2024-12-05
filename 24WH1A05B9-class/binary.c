#include<stdio.h>
int main(){
    int num,rem,i;
    printf("\nenter the number");
    scanf("%d",&num);
    for(i=num;num!=0;i++){
    rem=num%2;
    num=num/2;
    printf("\n%d",rem);
    }
    return 0;

}