//hacker rank question on functions to find max no
#include <stdio.h>

int max_of_four(int ,int ,int ,int );
int main() {
    int a, b, c, d;
    scanf("%d\n %d\n %d\n %d", &a, &b, &c, &d);
     max_of_four(a, b, c, d);
    
    return 0;
}
int max_of_four(int a,int b,int c,int d)
    {if(a>b &&  a>c && a>d){
        printf("%d", a);
        
    }
    if(b>c &&  b>a && b>d){
        printf("%d", b);
    
    }
    if(c>b &&  c>a && c>d){
        printf("%d", c);
    
    
    }
    if(d>a &&  d>b && d>c){
        printf("%d", d);
    
    
    }
    return 0;
}
