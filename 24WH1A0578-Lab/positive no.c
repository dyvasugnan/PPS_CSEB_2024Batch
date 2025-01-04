//check given number is positive or not
#include <stdio.h>
int main(){
    int num;
    printf("enter a number");
    scanf("%d",&num);
      if(num>0){
          printf("positive number");
      }
      else{
          printf("negative number");
      }
      return 0;
}
