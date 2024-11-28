#include<stdio.h>
  int main(){
  int a,b,n;
  printf("enter the intervals");
  scanf("%d %d",&a,&b);
printf("\nthe numbers are");
  for(n=a;n<=b;n++){
if(n<=7){
        switch(n){
        case 1:
        printf("\nONE");
        break;
        case 2:
        printf("\nTWO");
        break;
        case 3:
        printf("\nTHREE");
        break;
        case 4:
        printf("\nFOUR");
        break;
        case 5:
        printf("\nFIVE");
        break;
        case 6:
        printf("\nSIX");
        break;
        case 7:
        printf("\nSEVEN");
         break;
       }
      }
   if(n>7){
      if(n%2==0){
        printf("\n enen");
        }
       else{ 
       printf("\n odd");
      }
      }
      }
    return 0;
 }

