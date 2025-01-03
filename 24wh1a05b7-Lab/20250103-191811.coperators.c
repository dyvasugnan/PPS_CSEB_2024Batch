//display the contents of file to stardard output device
#include<stdio.h>

int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("a+b=%d\n",a+b);
    printf("a-b=%d\n",a-b);
    printf("a*b=%d\n",a*b);
    printf("a/b=%d\n",a/b);
    printf("a%b=%d\n",a%b);
    printf("a+=b=%d\n",a+=b);
    printf("a*=b=%d\n",a*=b);
    printf("a%=b=%d\n",a%=b);
    printf("a==b=%d\n",a==b);
    printf("a!=b=%d\n",a!=b);
    printf("a>b=%d\n",a>b);
    printf("a<b=%d\n",a<b);
    printf("a+b=%d\n",a+b);
    printf("a>=b=%d\n",a>=b);
    printf("a<=b=%d\n",a<=b);
    printf("a>b&&b<c=%d\n",a>b&&b<c);
    printf("a<b||b<c=%d\n",a<b||b<c);
    printf("!a=%d\n",!a);
    printf("a&b=%d\n",a&b);
    printf("a^b=%d\n",a^b);
    printf("a+b=%d\n",a+b);
    printf("a+b=%d\n",a+b);
    printf("a<<1=%d\n",a<<1);
    printf("a>>1=%d\n",a>>1);
    return 0;
}