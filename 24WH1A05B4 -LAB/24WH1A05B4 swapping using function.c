#include<stdio.h>
#include<math.h>

void swapping_of_two_numbers(int a,int b);


int main(){

int a,b,c;
printf("enter two numbers\n");
scanf("%d%d",&a,&b);
printf("\nbefore swapping\na=%d\nb=%d\n",a,b);
swapping_of_two_numbers(a,b);
return 0;
}
void swapping_of_two_numbers(int a,int b){
int c=a+b;
b=c-a;
a=c-b;

printf("\nafter swapping\nb=%d\na=%d\n",b,a);

}


