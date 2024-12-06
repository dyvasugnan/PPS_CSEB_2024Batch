//password authentication
#include<stdio.h>
#include<string.h>
int main(){
char originalpin[10]="hasi24";
char enterpin[10];
int attempt=0;//starts from 0th attempt
int retry=3;//no. of times to enter the pin
while(attempt<retry){
   printf("enter your pin:\n");
   scanf("%s",&enterpin);
if(strcmp(originalpin,enterpin)==0){//comparision of string
    printf("password authentication successful\n");
    break;
}
    else{
        attempt++;
        if (attempt<retry){
            printf("try again\n");
        }
        else {
            printf("youve reached maximum trails\n");
        }
    }
    }
    return 0;
}
