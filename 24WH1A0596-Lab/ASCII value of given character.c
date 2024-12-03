//Finding ASCII value
#include <stdio.h> 
int main(){
char ch;
printf("Enter a character\n");
scanf("%c",&ch);
//%d displays the integer value of character
//%c displays the actual character 
printf("ASCII value of %c = %d",ch ,ch);
  return 0; 
}