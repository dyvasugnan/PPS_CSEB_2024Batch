#include<math.h>
int main(){

int arr[]={1,2,3,4,5},sum=0,i,n=5;
float mean = 0;
    for(i =0;i<=4;i++){
     sum = sum +arr[i];
                    }

 printf("sum = %d\n",sum);

mean=sum/n;

printf("mean =%f\n",mean);

//variance of array elements

 float variance = 0;
for(i =0;i<5;i++){

variance = variance + pow((arr[i] - mean),2);

}

printf("variance = %f\n",variance);

//Standard Deviation of array elements

float SD = sqrt(variance);
 printf(" Standard Deviation = %f\n",SD);






return 0;


}

