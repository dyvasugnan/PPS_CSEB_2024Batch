#include<stdio.h>
int main(){
int percentage;
printf("enter the percentage obtained by student");
scanf("%d",&percentage);
if(percentage<40){
    printf("Failed");
}
else if(percentage>40 && percentage<60){
    printf("Second class");
}
else if(percentage>60 && percentage<70){
    printf("First class");
}
else if(percentage>=70){
    printf("Distinction");
}
return 0;
}
