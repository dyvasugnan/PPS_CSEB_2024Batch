#include<stdio.h>

int main(){
int i,n=20;
for(i=1;i<=n;i++){
if(i%3==0 && i%5==0){
printf("fizz buzz\n");
}
else if(i%3==0){
printf("fizz\n");
}
else if(i%5==0){
printf("buzz\n");
}
else
{
printf("%d\n",i);
}
}
    return 0;
}