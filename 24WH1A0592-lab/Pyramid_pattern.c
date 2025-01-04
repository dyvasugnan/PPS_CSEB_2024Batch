//construction of a pyramid of numbers
#include<stdio.h>
int main(){
int r,c,n;
printf("enter row=column number:");
scanf("%d",&n);
for(r=1;r<=n;r++){
for(c=1;c<=r;c++){
printf("%d ",r);
}
printf("\n");
}
return 0;
}
