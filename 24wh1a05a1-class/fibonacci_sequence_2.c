//searching the no in the fibonacci sequence
//considering the given int argument as the no the be searched
#include<stdio.h>
int is_fibonacci_term(int);
int main(){
    int num;
    printf("enter a no to search \n");
    scanf("%d",&num);
    int x;
    x=is_fibonacci_term(num);
    if(x==1){
        printf("%d is fibonacci term \n",num);
            }
  else{
    printf("%d is not fibonacci term \n",num);

  }
  return 0;
}
int is_fibonacci_term(int n){
    int t0=0,t1=1,next_term=t0+t1,i;
    if(n==0 || n==1){
        return 1;
    
    }
    while(1){
        next_term=t0+t1;
        
        if(t0+t1==n){
            return 1; 
        }
        if(next_term>n){
            return 0;
        }
       t1=t0;
       t0=next_term;
        }
}