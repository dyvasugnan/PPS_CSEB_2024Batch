#include<stdio.h>
int main(){
    int i=10,n,r;
    scanf("%d",&n);
      int a[11]={0};
 while(n>0){
    r=n%2;
    a[i]=r;
    n=n/2;
    i--;
 }
      for(i=0;i<=10;i++)
      printf("%d",a[i]);
return 0;
}






    