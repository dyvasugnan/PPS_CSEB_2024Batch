// to find max element using functoins
#include<stdio.h>
int maximum_element(int[],int);
int main(){
int a[]={1,2,3,4,5};
int n=sizeof(a)/sizeof(a[0]);
int max1=maximum_element(a,n);
printf("%d",max1);
return 0;

}
int maximum_element(int a[],int n){
int i,max;
max=a[0];
for(i=0;i<n;i++){
if(a[i]>max){
max=a[i];
}
}
return max;
}


