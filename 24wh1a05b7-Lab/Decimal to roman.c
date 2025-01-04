//coverting a number from 1 to 50 to roman equivalent
#include<stdio.h>
void decimalToRoman(int num){
    if(num<=0||num>50){
     
    printf("invalid input.please enter a number between 1 and 50:\n");
    return ;
    
    }
    int decimalValue[]={1,4,5,9,10,40,50};
    char *romanSymbol[]={"I","IV","V","IX","X","XL","L"};
     for(int i = 6;i>=0;i--){
           while(num>=decimalValue[i]){
               printf("%s",romanSymbol[i]);
               num-=decimalValue[i];
           }
     }
    printf("\n");
}
int main (){
    int decimalNum;
    printf("Enter a number between 1 and 50:\n");
    scanf("%d",&decimalNum);
    decimalToRoman(decimalNum);
}
