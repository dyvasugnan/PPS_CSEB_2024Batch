//finding nth term in a sequence
#include <stdio.h>
int find_nth_term(int n, int a, int b, int c) {
  int i,sum=0;
  
    if(n==1)
    return a;
    else if(n==2)
    return b;
    else if(n==3)
    return c;
    else{
   for(i=0;i<(n-3);i++)
   {
   sum=a+b+c;
   a=b;
   b=c;
   c=sum;
   }  
}
  return sum;
    
}
int main() {
    int n, a, b, c;
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
    printf("%d", ans); 
    return 0;
} 
