 #include<stdio.h>
  #include<math.h>
   int main(){
     int n=17,i,count=6,j=0;
     while(count!=10001){
         j=0;
      for(i=3;i<=sqrt(n);i++){
        if(n%i==0)
           j++;
      }
      if(j==0)
      count++;
      n+=2;
     }
     printf("%d",n-2);
    }