#include<stdio.h>
int sum_nTimes(int,int);
int main(){
  int n,i,n1,n2,sum;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    scanf("%d %d",&n1,&n2);
    sum=sum_nTimes(n1,n2);
    printf("\n%d\n",sum);
      }
    return 0;
    }
int sum_nTimes(int n1,int n2){
      int sum=n1+n2;
      return sum;
     } 
