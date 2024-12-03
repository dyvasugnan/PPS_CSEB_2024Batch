//second max in array
#include <stdio.h>
int main() {
    int a[5]={25,24,32,99,76},len=5;
    int i,max1,max2;
    if(a[0]>a[1]){
        max1=a[0];
        max2=a[1];
    }
    else{
         max1=a[1];
        max2=a[0];
        
    }
    for(i=2;i<len;i++){
        if(a[i]>max1){
            max2=max1;
            max1=a[i];
        }
        else if(a[i]>max2 && a[i]<max1){
            max2=a[i];
        }
    }
    printf("second maximum:%d",max2);
    return 0;
}