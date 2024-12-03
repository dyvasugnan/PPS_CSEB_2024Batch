//hackerrank problem on playing with characters 
#include <stdio.h>
#include <string.h>

int main() 
{
char ch, s[100], sen[100]; 
    scanf("%c\n",&ch);
    scanf("%s\n",s);
    scanf("%[^\n]%*c",sen);
    printf("%c\n%s\n%s",ch,s,sen);
    return 0;
    }
