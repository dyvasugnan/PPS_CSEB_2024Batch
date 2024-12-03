//Finding factors of a given number
#include <stdio.h>
int main(){
int number,i;
printf("Enter a positive integer: ");
scanf("%d",&number);
printf("Factors of %d are:  ",number);
for(i=0;i<=number;++i){
if(number%i==0){
printf("%5d",i);
}
}
return 0;
}