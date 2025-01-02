//collatz sequence
#include <stdio.h>
void collatz_sequence(int n);
int main(){
    int n;
    printf("enter a number:\n");
    scanf("%d",&n);
    if(n<0){
        printf("Enter a positive number\n");
    }
    else{
        collatz_sequence(n); //calling of function
    }
return 0;
}
void collatz_sequence(int n){
    while(n!=1){
        printf("%d",n);
        if(n%2==0){
            n=n/2; //for even number
        } 
        else{
            n=(3*n)+1; //for odd number
        }
    } printf("%d",1/n);
}
