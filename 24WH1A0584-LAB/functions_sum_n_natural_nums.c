//sum of 1st n natural nums in function//

#include<stdio.h>
int sum_n_natural_nums(int);
int main(){
     int n,sum;
     printf("Enter n value\n");
     scanf("%d",&n);
     sum=sum_n_natural_nums(n);
     printf("%d",sum);
     return 0;
}
int sum_n_natural_nums(int n){
     int i,sum=0;
     for(i=1;i<=n;i++){
         sum=sum+i;
     }
     return sum;
}