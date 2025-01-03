// a number is called duck no if it contains atleast one digit as "0"
//program to find whether the given no is duck no or not
#include<stdio.h>
int isduck_number(int);
int main(){
int num;
printf("enter any no\n");
scanf("%d",&num);
int count;
count=isduck_number(num);
if (count==0){
    printf("%d is not the duck number",num);
}
else{
    printf("%d is  duck number",num);
}
return 0;
}
int isduck_number(int n){
    int count=0,r;
    while(n!=0){
     r=n%10;
     if(r==0)
     count++;
     n=n/10;
    }
    return count;
}