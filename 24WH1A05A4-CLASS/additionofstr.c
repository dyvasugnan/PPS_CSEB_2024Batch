#include<stdio.h>
#include<string.h>
void strgcat(char[],char[],int);
int main(){
    char mainstr[100],substr[50],str[150];
    int n,l1,l2,i;
    printf("enter main string");
    scanf("%s",mainstr);
    printf("enter sub string");
    scanf("%s",substr);
    printf("enter the position");
    scanf("%d",&n);
    strgcat(mainstr,substr,n);

}
void strgcat(char mainstr[],char substr[],int n){
    int l1,l2,i;
    l1=strlen(mainstr);
    l2=strlen(substr);
    for(i=n;i<=l1;i++){
        mainstr[l2+i]=mainstr[i];
    }
    for(i=0;i<l2;i++){
        mainstr[n]=substr[i];
        n++;
    }
    printf("%s",mainstr);
}
