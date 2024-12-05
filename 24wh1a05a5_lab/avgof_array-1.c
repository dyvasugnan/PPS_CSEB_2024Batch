//avg of array using function
 
#include<stdio.h>
int avgof_array(int[],int);

int main(){
int n,i ;
 scanf("%d",&n);
    int arr[n];
for(i=0;i<n;i++){
 scanf("%d",&arr[i]);
}

int avg = avgof_array(arr,n);
printf("avg : %d",avg);

return 0;
}

int avgof_array(int arr[],int n){

int i,sum = 0,avg;
for(i=0;i<n;i++){

sum = sum + arr[i];

}

avg = sum/n;
return avg;
}









