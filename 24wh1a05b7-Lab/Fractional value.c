//fractional value
#include<stdio.h>
#include<math.h>
int main ()
{ float x, result;
 printf ("enter the value of x");
 scanf ("%f", &x);
 result =1-(x/2)+pow(x,2/4)-pow(x,3/6);
 printf("the fractional value is=%2f\n",result);
 return 0;    

}
    