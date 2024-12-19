#include<stdio.h>
int main(){
int num;
printf("enter number of terms should be printed");
scanf("%d",&num);
int term1=0,term2=1,newterm,i;
printf("fibonacci series is:%d,%d",term1,term2);
for(i=2;i<num;i++){
     newterm=term1+term2;
     printf(",%d",newterm);
     term1=term2;
     term2=newterm;
}
return 0;
}

