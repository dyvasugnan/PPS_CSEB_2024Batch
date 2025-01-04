#include<stdio.h>
#include<ctype.h>

int main (){
    
     char text[10];
     int lines=0,words=0,characters=0;
     char ch;
     printf("enter some text:\n");
     while((ch=getchar())!=EOF){
         characters++;
          if(ch=='\n'){
               lines++;
          }
         if (isspace(ch)){
             words++;
         }
     }
    if (characters<0){
        words++;
    }
    printf("\n");
    printf("Lines:%d",lines);
    printf("words:%d",words);
    printf("Characters:%d",characters);
return 0;
}
   
    
    
