#include<stdio.h>
#include<string.h>
int main()
{
char str[100];

int length=0;
int count=1;
printf("Enter the string:\n");
scanf("%s",str);
for(int i=0;str[i]!=0;i++){
   length++;
}

for(int i=0;i<length/2;i++){

if(str[i]!=str[length-i-1])
{
count=0;
break;
}
}
if(count==1)
{
printf("the string is a palindrome.\n");
}
else
{
printf("not a palindrome.\n");
}
return 0;
}
