//fibonacci sequence considering the supplied int argument as to produce the sequence until n terms is obtained or else near by small term
#include<stdio.h>
void fibonacci_sequence(int);
int main(){
    int n;
    printf("enter the n value \n ");
    scanf("%d",&n);
    fibonacci_sequence(n);
    return 0;
}
void fibonacci_sequence(int num){
    int t1,t0,next_term,i;
    t0=0,t1=1;
    next_term=t0+t1;
    
    printf("fibonacci sequence \n");
printf("%d %d ",t0,t1);
   for(i=0;t0+t1<num;i++){
        next_term=t0+t1;
        printf("%d ",next_term);
                 t0=t1;
         t1=next_term;

    }
    
}