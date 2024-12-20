//power of x^n using recursion
 #include<stdio.h>
 #include<math.h>
 int power(int,int);
  int main(){
   int x,n;
   printf("enter the numbers");
   scanf("%d %d",&x,&n);
   int result=power(x,n);
     printf("%d",result);
     return 0;
     }
     int power(int x,int n){
       if(n==0){
         return 1;
          }
        return x*power(x,n-1);
       }
    
