#include<stdio.h>
#include<math.h>

int addition (int a,int b);
int subtraction (int a,int b);
int multiplication (int a,int b);
int division (int a,int b);



int main(){

int a,b;
printf("enter two numbers\n");
scanf("%d%d",&a,&b);
addition (a,b);
subtraction(a,b);
multiplication ( a,b);
division ( a, b);
return 0;
}
int addition (int a,int b){

int c=a+b;

printf("\nsum of two numbers is:%d\n",c);

}

int subtraction (int a,int b){

int c=a-b;

printf("\ndifference of two numbers is:%d\n",c);

}

int multiplication(int a,int b){

 int c=a*b;
 
 printf("\n product of two numbers is:%d\n",c);
 
 }
 int division (int a,int b){
 
 int c=a/b;
 
 printf("\nthe quotient value is:%d\n",c);
 
 }
 
