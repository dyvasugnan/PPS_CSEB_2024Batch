#include<stdio.h>
void swaping_2nos(int,int);
int main(){
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    swaping_2nos(n1,n2);
    return 0;
}
void swaping_2nos(int n1,int n2){
    int temp;
    temp=n2;
    n2=n1;
    n1=temp;
    printf("%d %d",n1,n2);
}