#include<stdio.h>
void display(int,float,char);
int main(){
    int n1=10;
    float n2=2.8;
    char ch='a';
    display(10,2.8,'a');
    return 0;
}
void display(int n1,float n2,char ch){
    printf ("%d\n",n1);
    printf ("%f\n",n2);
    printf ("%c\n",ch);
}