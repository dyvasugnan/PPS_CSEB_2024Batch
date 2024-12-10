//array increment
#include<stdio.h>
int array_increment(int[],int);
int main(){
int i;
    int a[]={1,2,3,4,5};
	int n= sizeof(a)/sizeof(a[0]);
	array_increment(a,n);
	for(i=0;i<n;i++){
	printf(" %d",a[i]);
	              }
				  return 0;


	}
	int array_increment(int a[],int n){
	int i;
	for(i=0;i<n;i++){
	a[i]=a[i]+1;
	             }
}
