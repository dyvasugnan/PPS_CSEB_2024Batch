//colatz series
#include<stdio.h>
int main(){
int num;
printf("enter a number");
scanf("%d",&num);
while (num!=1){
    if(num%2==0){
     num=num/2;
    }
    else{
        num=num*3+1;
    }
    printf("%d \t",num);
}
return 0;
}