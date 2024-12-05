#include<stdio.h>
int arrInc(int []);
int main(){
  int i,a[5]={1,2,3,4,5};
    for(i=0;i<5;i++){
        printf("%4d",a[i]);
        }
		printf("\n");
        arrInc(a);
		for(i=0;i<5;i++){
   	     printf("%4d",a[i]);
		 }
	     
	     return 0;
	  }
int arrInc(int b[]){
  int i;
   for(i=0;i<5;i++){
     b[i]=b[i]+1;
	} 
	 	 
}	 
