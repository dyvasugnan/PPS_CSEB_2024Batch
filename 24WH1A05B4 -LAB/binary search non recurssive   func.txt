//binary search non recurssive   function
#include<stdio.h>
int binarySearch(int a[],int key,int n);
int main(){
    int a[100],n,key,i;
    printf("enter number of elements:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter element to be searched:\n");
    scanf("%d",&key);
int result=binarySearch(a,key,n);
   if(result==1)
     printf("not found");
 else
    printf("%ddd",result);
}
int binarySearch(int a[],int key,int n){
    int low,high,mid,i;
    low=0,high=n-1;
    while(low<=high){
        mid=(low+high)/2;
    if(key==a[i])
          return mid;
  else if(key>a[i])
         low=mid+1;
 else
        high=mid-1;
    }
    return -1;
        
    }

    
    
    
    
    
    
