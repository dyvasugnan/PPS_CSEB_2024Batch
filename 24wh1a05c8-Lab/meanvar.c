#include<stdio.h>
#include<math.h>

float meanarr(int sum,int n){
		float mean = sum /n;
		return mean;
	}

float variancearr(int n, int x[], float meanarr){
		int i, sum1;
		for(i = 0;i < n;i++)
			sum1 += pow((x[i] - meanarr),2);
		float var = sum1 / n;
		return var;
	}

int main(){
		int arr[10], n,sum = 0;
	
	
		printf("Enter n: ");
		scanf("%d", &n);

		printf("Enter array:");
		for(int i = 0;i < n; i++){
			scanf("%d", &arr[i]);
		}
		for(int i = 0;i < n; i++){
			sum += arr[i];
		}

		float mean = meanarr(sum,n);
		printf("Mean is %.2f\n", mean);

		float variance = variancearr(n,arr,mean);
		printf("Variance is %.2f\n", variance);

		return 0;
	}
