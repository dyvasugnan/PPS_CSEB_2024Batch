//convert binary to decimal equivalent
#include<stdio.h>
#include<math.h>
int main(){
int n,sum=0,pro=1,i,j;
printf("enter no.of 0's and 1's");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
	scanf("%d",&a[i]);
}
j=0;
for(i=n-1;i>=0;i--){
	pro=1;
	pro=pro*a[i]*pow(2,j);
	sum=sum+pro;
	j++;
}
printf("%d",sum);
return 0;
}
