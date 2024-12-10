#include<stdio.h>
#include<math.h>
int main(){
    long long int n,i,j,count=0,max;
      n=600851475143;
      for(i=3;i<=sqrt(n);i+=2){
        count=0;
        for(j=3;j<=sqrt(i);j+=2){
            if(i%j==0)
            count+=1;
        }
        if(count==0 && n%i==0)
          max=i;
      }
       printf("%lld",max);
}
