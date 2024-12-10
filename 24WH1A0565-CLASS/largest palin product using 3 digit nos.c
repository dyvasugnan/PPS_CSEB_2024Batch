#include<stdio.h>
int main(){
    long long int n,i,j,rev=0,pal=0,temp;
      for(i=999;i>=101;i--){
       for(j=999;j>=101;j--){
        if(i%10==0 || j%10==0)
         continue;
          n=i*j;
          temp=n;
          rev=0;
        while(n!=0){
             rev=rev*10+(n%10);
             n/=10;
        }
        if(rev==temp && rev>pal){
          pal=temp;
        }
       }
      }
       printf("%d %d %d",pal,i+1,j+1);
}
