//finding max and min of three numbers
#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    printf("%d is greatest",a);
    if(b>a && b>c)
    printf("%d is greatest",b);
    if(c>b && c>a)
    printf("%d is greatest",c);
  if(a<b && a<c)
    printf("%d is smallest",a);
    if(b<a && b<c)
    printf("%d is smallest",b);
if(c<b&& c<a)
    printf("%d is greatest",c);
return 0;

}