#include <stdio.h>
#include <math.h>
int main() {
    int a[10],n,i,num=0,temp;
    scanf("%d",&n); //number of digits in binary equivalent
    printf("Enter the binary equivalent \n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    temp=n;
    for(i=0;i<temp;i++){
        num+= (pow(2,i)*a[n-1]);
        n--;
    }
    printf("The number is %d",num);
    return 0;
}
