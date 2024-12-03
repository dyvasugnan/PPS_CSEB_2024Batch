#include<stdio.h>
#include<string.h>
void anagram(char[],char[]);
int main(){
    char ch1[100],ch2[100];
    printf("Enter the words\n");
    scanf("%s %s",ch1,ch2);
    anagram(ch1,ch2);
     return 0;
      }
void anagram(char ch1[],char ch2[]){
    int s1=strlen(ch1),s2=strlen(ch2),i,j,count=0;
     if(s1!=s2){
        printf("not an anagram");
        return;
     }
        for(i=0;i<s1;i++){
            count=0;
            for(j=0;j<s2;j++){
               if(ch1[i]==ch2[j]){
                ch2[j]='\0';
                 count=1;
               }
               }
               if(count==0){
                printf("not an anagram");
               return;
               }
            }
           printf("anagram");
         }
