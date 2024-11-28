#include<stdio.h>
#include<math.h>
int main(){
	int n,prod=1,sum=0,j,i;
	printf("enter number of 1s and 0s in array");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	j=0;
	for(i=n-1;i>=0;i--){
		
		prod=1;                                   
		prod=prod*a[i]*pow(2,j);
		sum=sum+prod;
		j++;
	}
	printf("%d",sum);
}
