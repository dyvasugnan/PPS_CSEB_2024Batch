//converting decimal no. to binary equivalent//
#include<stdio.h>
int main(){
    int a[5],n=4,temp,num;
    printf ("Enter any number\n");
    scanf("%d",&num);
        for(int i=0;i<n;i++){
            temp=num%2;
            a[i]=temp;
            printf("%d",a[i]);
            num=num/2;
        }
    return 0;
}

//15
//1111