#include<stdio.h>
int sumOfnumbers(int);
int main(){
 int num;
 printf("enter any number");
 scanf("%d",&num);
 int value = sumOfnumbers(num);
 printf("the sum of n numbers is %d",value);
return 0;
}

int sumOfnumbers(int num){
     return(num*(num+1))/2 ;

}
