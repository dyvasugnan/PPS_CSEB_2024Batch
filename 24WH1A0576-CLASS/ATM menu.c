//ATM MENU
#include<stdio.h>
int main(){
    int choose;
    float balance=5000.0;
    float amount;
    
    printf("\nATM MENU\n");
    printf("********************************************\n");
    printf("1.Check your current balance\n");
    printf("2.Deposit Your Money\n");
    printf("3.Withdraw your Money\n");
    printf("4.Exit\n");
    printf("enter your choice:\n");
    scanf("%d",&choose);
    
    switch (choose){
        case 1:
          printf("your current balance is:%.1f",balance);
          break;
        case 2:
          printf("enter amount of deposit:\n");
          scanf("%f",&amount);
          balance+=amount;
          printf("current balance is:%.1f",balance);
          printf("deposit succesful!\n");
          break;
        case 3:
          printf("enter amount of withdraw:\n");
          scanf("%f",&amount);
          if(amount<=balance){
          balance-=amount;
          printf("current balance is:%.1f",balance);
          printf("withdraw successful!\n");
          }
          else 
           printf("insufficient money,try again");
          break;
        case 4:
          printf("successfully exited\n");
          return 0;
        default:
          printf("invalid choice,re enter your request");
    }
    return 0;
}
