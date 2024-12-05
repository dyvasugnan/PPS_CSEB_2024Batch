#include<stdio.h>
int sumofnumbers(int*[],int n);
float averageofnumbers(int*[],int n);
int main(){
int n,i;
printf("enter the numbers of elements");
scanf("%d"&n);
int arr[n];
for(i=o;i<n;i++){
scanf("%d"&arr[i]);
}
int sum=sum of numbers(arr,n);
float avg=average of numbers(arr,n);
printf("sum of numbers is:%d\n",sum);
printf("average of numbers is:%d\n",avg);
return 0;
}
int sum of numbers(int*arr,int n){

int sum=0;
for(i=0;i<n;i++){
sum+=*(arr+i);
}
return sum;
}
int average of numbers(int*arr,int n){

int avg=0;
for(i=0;i<n;i++){
avg=*(arr+i)/n;
}
return avg;
}
