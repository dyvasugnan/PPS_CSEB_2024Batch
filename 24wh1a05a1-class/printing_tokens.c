//printing the every word in newline
//hackerrank problem
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s[5000];
    
    scanf("%[^\n]", s);

    int i;
    int n=strlen(s);
    for(i=0;i<n;i++){
        if(s[i]!=' '){
            printf("%c",s[i]);
        }
        else if(s[i]==' '){
            printf("\n");
        }
    }
    return 0;
}
    