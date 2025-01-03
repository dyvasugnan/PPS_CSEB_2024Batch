#include <stdio.h>

int main(){
    char  s[1000];
    int count=0;
    char a='0';
    scanf("%s",s);
    for(int i=0;i<=9;i++){
    int count=0;
       for(int j=0;j<strlen(s);j++){
            if(s[j]==a){
                count++; 
            }
           
        }
        printf("%d\t",count);
        count=0;
         a++;
    }
    return 0;
}
