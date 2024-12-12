//sum of even valued terms in fibonacci series
#include<stdio.h>
int main(){
    long long int t0=0,t1=1,next_term,sum=0;
	while(next_term<4000000){
		next_term=t0+t1;
		if(next_term%2==0)
		 sum=sum+next_term;
		t0=t1;
		t1=next_term;
	}
	printf("%lld",sum);
}
