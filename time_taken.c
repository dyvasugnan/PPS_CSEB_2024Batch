#include<stdio.h>
#include<math.h>
int main(){
int ini_vel=0,height=30,num;
float acc=9.8,time;//by using s=ut+0.5*a*t*t here u=0 so t=squroot(2*s/a) 
num=(2*height)/acc;
time=sqrt(num);
printf("The time taken to reach each floor is:%f",time);
return 0;
}

