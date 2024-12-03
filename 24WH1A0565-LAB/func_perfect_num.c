#include<stdio.h>
int perfect_num(int);
int main(){
    int n,b;
    scanf("%d",&n);
    b=perfect_num(n);
    printf("%d",b);
    return 0;
      }
int perfect_num(int n){
     int i,sum=0;
     for(i=1;i<n;i++){
       if(n%i==0)
         sum+=i;
       }
     return (sum==n);
    } 
      
