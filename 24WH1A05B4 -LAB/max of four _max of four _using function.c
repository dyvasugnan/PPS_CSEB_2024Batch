#include <stdio.h>

int max_of_four(int a,int b,int c,int d);

int main() {
    int a, b, c, d;
    printf("enter four numbers:\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int result = max_of_four(a, b, c, d);
    printf("%d is the maximum number", result);
    
    return 0;
}
int max_of_four(int u,int v,int w,int x ){
    int max;
    
    if(u> v){
        if(u>w && u>x)
        max = u;
          
          
          
               }
    
    if(v> w){
        if(v> u&& v>x)
          max = v;
        
             }
    if(w>x){
    
    if(w>u&& w>v)
        
         max = w;
        
    }
    else{
        max = x;
    }
        
        return max;
        
    }
    