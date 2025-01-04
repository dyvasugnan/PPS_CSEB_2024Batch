#include<stdio.h>
int main(){
int marks;
printf(" Enter Marks between 0-100");
scanf("%d",&marks);
if (marks>100||marks<0){
printf("Your Input is out of Range");
}
else if (marks >= 70){
    printf("You got Distinction");
}
   else if (marks >= 60){
        printf("You got First Class");
}
  else if (marks >= 40){
      printf("You got Second Class");
}
else{
     printf("You got Failed");
return 0;
}
