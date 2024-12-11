#include<stdio.h>
 int main(){
    int rem, n,i,j,a[10];
    printf("enter number between o to 255:");
    scanf("%d",&n);
    for(i=0;n!=0;i++){
       rem=n%2;
       n=n/2;
       a[i]=rem;
    }
   printf("binary form");
  for(j=i-1;j>=0;j--){
     printf("%d",a[j]);
    }
   return 0;
}
