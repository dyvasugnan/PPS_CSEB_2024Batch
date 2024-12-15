
#include <stdio.h>
int arr_reverse(int n,int a[n],int i) {
	if(n==0)
	   return a[n];
	printf("%d\t",a[i]);
    return arr_reverse(n-1,a,i-1);
  }

int main() {
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d" ,&a[i]); 
    i=n-1;
    arr_reverse(n, a,i);
    
    return 0;
}



