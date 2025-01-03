// converting a number to binary number
#include<stdio.h>
int main(){
int num,i,j,a[10];
printf("enter a number between 20 to 255");
scanf("%d",&num);
for(i=0;num!=0;i++){
int rem = num%2;
num = num/2;
a[i] = rem;
}
for(j=i-1;j>=0;j--){
printf("%d",a[j]);
}
return 0;
}
