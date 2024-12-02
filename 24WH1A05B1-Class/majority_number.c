#include<stdio.h>
int main()
{
	int a[10]={2,2,1,3,4,2,2,5,2,2};
	int i,j,count,n=10;
	for(i=0;i<n-1;i++){
		count=1;
		for(j=i+1;j<n;j++){
			if(a[i]==a[j])
			count++;
		}
		if(count>n/2)
		printf("%d",a[i]);
	}
	return 0;
}
