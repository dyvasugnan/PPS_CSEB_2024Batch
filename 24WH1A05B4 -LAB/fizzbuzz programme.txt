nclude<stdio.h>
int gcd(int,int);
int main(){

int num1,num2;
scanf("%d,%d",&num1,&num2);

 int res = gcd(num1,num2);
printf("%d",res);

}
int gcd(int x,int y){
if(x<y)
return gcd(y,x);
if(y == 0)
return x;
else
return gcd(y,x%y);


}
~                                                                               
"GCD.c" 22L, 260C                                       