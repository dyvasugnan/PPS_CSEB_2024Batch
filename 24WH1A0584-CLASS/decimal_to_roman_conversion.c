//Coverting a number to roman equivalent from 1 to 50//

#include<stdio.h>
void decimal_to_roman(int);
int main (){
    int n;
    printf("Enter a number between 1 and 50:\n");
    scanf("%d",&n);
    decimal_to_roman(n);
    return 0;
}
void decimal_to_roman(int n){
    int i;
    int romanValue[]={1,4,5,9,10,40,50};
    char *romanSymbol[]={"I","IV","V","IX","X","XL","L"};
    if(n<=0||n>50){
        printf("Invalid input.Enter a number between 1 and 50 only\n");
        return ;
    }
    for(i = 6;i >= 0;i--){
        while(n>=romanValue[i]){
            printf("%s",romanSymbol[i]);
            n = n - romanValue[i];
        }
    }
    printf("\n");
}