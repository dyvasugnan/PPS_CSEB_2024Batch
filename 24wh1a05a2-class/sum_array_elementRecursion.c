
#include <stdio.h>
int arr(int n,int a[n]) {
    if(n<0)
	   return 0;
	   	   
    return a[n]+arr(n-1,a);
	
  }

int main() {
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d" ,&a[i]); 
    int result= arr(n-1,a);
    printf("%d\n",result);
    return 0;
}



