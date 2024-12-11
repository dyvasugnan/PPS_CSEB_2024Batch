#include<stdio.h>
#include<math.h>

int addition (int a,int b);


int main(){

int a,b;
printf("enter two numbers\n");
scanf("%d%d",&a,&b);
addition (a,b);
return 0;
}
int addition (int a,int b){
int c=a+b;



printf("\nsum of two numbers is:%d\n",c);

}


