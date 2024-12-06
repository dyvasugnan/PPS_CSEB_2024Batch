//hackerrank problem on pointers
#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function 
    *a=*a+*b;{
        printf("%d\n",*a);
    }
    *b=*a-*b-*b;
    if(*b<0){
        printf("%d",-1*(*b));
    }
    else{
        printf("%d",*b);
            }
    
}
int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
        

    return 0;
}
