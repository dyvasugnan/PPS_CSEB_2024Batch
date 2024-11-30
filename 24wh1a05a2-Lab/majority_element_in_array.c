// Online C compiler to run C program online
#include<stdio.h>
int main(){
    //majority element
    int a[10]={1,2,2,2,2,8,34,2,1,2};
    int n=sizeof(a)/sizeof(a[0]),max;
    int count=1;
    for(int i=0;i<n-1;i++){
        count=1;
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j])
            count++;
            if(count>n/2){
              max=a[i];
            printf("%d",max);
            break;
            }
   }
 
} 
    
    return 0;
}








