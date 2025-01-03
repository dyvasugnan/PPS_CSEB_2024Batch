//Fibonacci sequence
#include<stdio.h>
int main(){
	int t0 = 0, t1 = 1;
	int next;
	int num;

	printf("Enter num: ");
	scanf("%d",&num);
	printf("%d %d ",t0, t1);	
	for(int i = 3; i <= num; i++){
	 	next = t0 + t1;    
        printf("%d ", next); 
        t0 = t1;            
        t1 = next;     
	}
	return 0;
}
