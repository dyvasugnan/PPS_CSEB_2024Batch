#include<stdio.h>
void sum();
int main()
{
printf("before function call\n");
sum();
printf("after function call\n");
return 0;
}
void sum(){
int n1=10,n2=20,res;
res=n1+n2;
printf("result:%d\n",res);}
