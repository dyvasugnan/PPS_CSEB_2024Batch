//sum of multiples of 3 and 5
#include<stdio.h>
int main(){
	int i,sum=0;
	for(i=1;i<1000;i++){
		if(i%3==0||i%5==0)
		sum=sum+i;
	}
	printf("%d",sum);
}
