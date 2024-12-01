#include <stdio.h>

int max_of_four(int,int,int,int);
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a,b,c,d);
    printf("%d", ans);
     return 0;
}
int max_of_four(int a,int b,int c,int d){
int max;

if(a>b){
        if(a>c&&a>d){
           
               max=a ;
               }   
               
        else if (c>d)
        max=c;
        else 
        max=d;
        }

else {
      { if(b>c&&b>d)
        { 
        max=b;}
        else if(c>d){
                
        
        max=c;}
        
         else 
         max=d;
      }  }
      return max;
}
