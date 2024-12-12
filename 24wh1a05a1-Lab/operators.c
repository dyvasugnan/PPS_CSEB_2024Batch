//program using all the operators
#include<stdio.h>
#include<stdbool.h>
int main(){
     int a=10,b=3;
//arithmetic operators
 int add,sub,mul,div,rem;
   add=a+b;
   sub=a-b;
   mul=a*b;
   div=a/b;
   rem=a%b;
   printf("%d \n %d \n %d \n %d \n %d",add,sub,mul,div,rem);
 //relational operators
  bool r,s,t,u,v,w;
   r=a<b;
   s=a>b;
   t=(a<=b);
   u=(a>=b);
   v=(a==b);
   w=(a!=b);
   printf("\n %d \n %d \n %d \n %d \n %d \n %d",r,s,t,u,v,w);
  //logical
  bool and,or,not;
  and=(a>b) && (a==b);
  or=(a>b) || (a==b);
  not=!((a>b) && (a==b));
  printf(" \n %d \n %d \n %d",and,or,not);
  //assignment opreator 
  int res;
    res=a+b;
	printf("\n %d",res);
//increment decrement
 int y,z,r1,r2;
   y=a++;
   z=a--;
   r1=++a;
   r2=--a;
   printf("\n %d %d %d %d ",y,z,r1,r2);
   //conditional
   int max;
    max=(a>b)?printf("%d is max",a):printf("%d is max",b);
 //bitwise
    int result=a&b;
	int m=a|b;
	int n=a^b;
	int o=~a;
	int p=a>>2;
	int q=a<<2;
	printf("%d %d %d %d %d %d ", m,n,o,p,q,result);
//specical operator
  int s1,*e;
  s1=sizeof(a);
  e=&a;
    printf("%d %d", s,e);return 0;
	}






