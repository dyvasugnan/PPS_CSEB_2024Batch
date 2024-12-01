//primeseries
#include<stdio.h>
int main(){
	int count=0,cnt=0,i,j,n,rem;
	printf("enter any number");
	scanf("%d",&n);
	cnt=1;
	i=2;
	do{
		count=0;
		for(j=1;j<=i;j++){
			rem=i%j;
			if(rem==0){
				count++;
			}
		}
		if(count==2){		
		printf("%d\n",i);
		cnt++;
       }
		i++;	
	}while(cnt<=n);
	return 0;
}
