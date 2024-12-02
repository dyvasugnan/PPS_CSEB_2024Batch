// Swapping of two numbers in function//

#include<stdio.h>
int swap_2_nums(int,int);
int main(){
    int a,b;
    printf ("Enter a,b values\n");
    scanf ("%d%d",&a,&b);
    swap_2_nums(a,b);
    return 0;
}
int swap_2_nums(int n1,int n2){
    int temp;
    temp=n2;
    n2=n1;
    n1=temp;
    printf ("a=%d,b=%d",n1,n2);
}