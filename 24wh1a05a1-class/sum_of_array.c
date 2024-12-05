//finding sum of all the elements in the array
#include<stdio.h>
int array_sum(int[],int);
int main(){
    int arr[50];
    int n;
    printf("enter the range of array\n");
    scanf("%d",&n);
    printf("enter all the elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int size=sizeof(arr)/sizeof(arr[0]);
int sum=array_sum(arr,size);
printf("%d",sum);
return 0;
}
int array_sum(int a[],int n1){
    int sum1=0,j;
    
    for(j=0;j<n1;j++){
        sum1=sum1+a[j];
    }
    return sum1;

}