#include<stdio.h>
int main(){
    char ch;
    char str[100];
    char sen[100];
  
    scanf("%c",&ch);
    printf("%c\n",ch); 
     
    scanf("%s",str);
    printf("%s",str);
   
    scanf("%[^@]s",sen);//it reads upto @ value
    printf("%s",sen);
    
    return 0;
}
