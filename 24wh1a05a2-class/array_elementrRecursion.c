
#include <stdio.h>
int arr(int n,int a[n],int i) {
	if(n==0)
	   return a[n];
	printf("%d\t",a[i]);
    return arr(n-1,a,i+1);
  }

int main() {
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d" ,&a[i]); 
    i=0;
    arr(n, a,i);
    
    return 0;
}



