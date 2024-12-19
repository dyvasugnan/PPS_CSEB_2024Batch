#include<stdio.h>
int main(){
   int i,n;
   float sum=0.0,avg;
   printf(" enter number of elements\n");
  scanf("%d",&n);
  int a[n];
printf("enter %d integes\n",n);
for(i=0;i<n;i++){
scanf("%d",&a[i]);
sum+=a[i];
}
 int min=a[0],max=a[0];
 for(i=1;i<n;i++){
    if(a[i]<min){
  min=a[i];
}
if(a[i]>max){
 max=a[i];
 }}
avg=sum/n;
printf("minimun:%d\n",min);
printf("max :%d\n",max);
  printf("avg:%2f\n",avg);
return 0;
}
