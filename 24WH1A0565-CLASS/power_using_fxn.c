#include<stdio.h>
#include<math.h>
int power(int,int);
int main(){
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=power(a,b);
    printf("%d",c);
    return 0;
}
int power(int x,int y){
    int p;
    p=pow(x,y);
    return p;
}