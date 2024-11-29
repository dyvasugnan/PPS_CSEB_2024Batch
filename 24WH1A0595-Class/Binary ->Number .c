#include <stdio.h>
#include <math.h>
int main() {
    int arr[20],n,i;
    int num=0,temp;
    scanf("%d",&n);
   printf("Enter the binary no");
        for(i=0;i<n;i++){   
           scanf("%d",&a[i]);
          }
     temp=n;
         for(i=0;i<temp;i++){
           num+= (pow(2,i)*a[n-1]);
          n--;
        }
    printf(" %d",num);
    return 0;
}

