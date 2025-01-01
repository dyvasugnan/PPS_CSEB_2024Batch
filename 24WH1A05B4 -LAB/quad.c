//finding roots of quadratic equation

#include<stdio.h>
#include<math.h>

int main(){

 int a,b,c,d,r1,r2;

 printf("enter the values of a,b,c:\n");

 scanf("%d%d%d",&a,&b,&c);

 d=b*b-4*a*c;

if(d>0){

  r1=(-b+sqrt(d))/2*a; 
  r2=(-b-sqrt(d))/2*a;

 printf("r1=%d\nr2= %d\n",r1,r2);
 
 printf("roots are real");

}
else if(d==0){

  r1=(2*a);
  r2=-b/2*a;

 printf("r1=%d\nr2=%d",r1,r2);

 printf("roots are equal");
}
else{

printf("roots are imaginary");
}
return 0;
}

