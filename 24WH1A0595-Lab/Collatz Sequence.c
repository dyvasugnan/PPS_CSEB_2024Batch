//collatz sequence
#include <stdio.h> 
int main(){
int n;
    printf("enter starting no: "); 
    scanf("%d",&n);

    while (n != 1) {  
        printf("%d ", n);  
        if (n % 2 == 0) 
            n = n/2;   
         else  
            n = 3 * n + 1; 
    }  
    printf("1\n");
  return 0;  
}
