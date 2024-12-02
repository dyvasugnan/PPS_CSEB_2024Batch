// Armstrong number in functions //

#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool armstrong_num(int);
int main(){
    int n;
    bool flag;
    printf ("Enter n value\n");
    scanf ("%d",&n);
    flag=armstrong_num(n);
    if(flag)
        printf ("%d is an armstrong number\n",n);
    else
        printf ("%d is not an armstrong number\n",n);
    return 0;
}
bool armstrong_num(int n){
    int rem,sum=0,temp,digit=0;
    temp=n;
    while(n!=0){
        n=n/10;
        digit++;
    }
    n=temp;
    while(n!=0){
        sum+=pow(n%10,digit);
        n=n/10;
    }
    return(sum==temp);
}
