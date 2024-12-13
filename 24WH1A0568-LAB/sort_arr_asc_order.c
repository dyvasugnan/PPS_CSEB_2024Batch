//sorting in ascending order
#include<stdio.h>
void sort(int arr[]){
int i,j,n=4;
for(i=0;i<n-1;i++){
   for(j=i+1;j<n;j++){
      if(arr[i]>arr[j]){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
   }
}
for(i=0;i<4;i++)
printf("%d",arr[i]);

}
int main(){
int  num[5];
int i;
printf("enter a 4 digit number");
for(i=0;i<4;i++)
scanf("%d",&num[i]);
sort(num);
return 0;
}
