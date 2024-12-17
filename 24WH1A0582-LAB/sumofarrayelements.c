#include<stdio.h>
int main(){
int n,i,sum=0;
printf("enter number of elements:\n");
scanf("%d",&n);
int a[n],*ptr=a;
printf("enter %d elements \n",n);
for(i=0;i<n;i++){
scanf("%d",ptr+i);
sum+=*(ptr+i);
}
printf("Sum of array elements is:\n");
printf("%d",sum);
return 0;
}

