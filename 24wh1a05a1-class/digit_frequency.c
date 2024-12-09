//finding how many times did the no repeated in the given string
#include<stdio.h>
#include<string.h>
int main(){
    char num[1000];
    int count=0;
    char arr[10]={'0','1','2','3','4','5','6','7','8','9'};
    scanf("%s",num);
    for(int i=0;i<10;i++){
        count=0;
        for(int j=0;j<strlen(num);j++){
            if(num[j]==arr[i]){
                count++;
            }
            
        }
        printf("%d ",count);
    }
    return 0;
    }
