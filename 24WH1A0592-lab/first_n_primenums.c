//print prime numbers between 2 to n
#include<stdio.h>
int main(){
int n,i,j,count;
printf("enter n value:");
scanf("%d",&n);
for(i=1;i<=n;i++){
count=0;
for(j=2;j<=i/2;j++){
if(i%j==0){
count++;
break;
}
}
if(count==0&& i!=1)
printf("%4d",i);
}
return 0;
}
