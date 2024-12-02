#include<stdio.h>
int roman(int,int,char);
int main(){
    int y;
    scanf("%d",&y);
    y=roman(y,1000,'M');
    y=roman(y,500,'D');
    y=roman(y,100,'C');
    y=roman(y,50,'L');
    y=roman(y,10,'X');
    y=roman(y,5,'V');
    roman(y,1,'I');
    return 0;
}
int roman(int y,int n,char ch ){
    int d,i;
    d=y/n;
    for(i=1;i<=d;i++)
        printf("%c",ch);
      return (y-d*n);
}
