#include<stdio.h>

int main()
{
    int a,b,sum;
    int *ptr=&a;
    int *qtr=&b;
    printf("enter 2 numbers");
    scanf("%d %d",&a,&b);
    sum=(*ptr)+(*qtr);
    printf("%d",sum);
    return 0;
}