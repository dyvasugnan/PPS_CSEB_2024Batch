//Digit frequency
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char num[1000];
    int freq[10] = {0};
    
    scanf("%[^\n]s",num);
    
    for(int i = 0;i < strlen(num);i++){
        if(num[i] >= '0' && num[i] <= '9')
            freq[num[i] - '0'] ++;
    }
    
    for(int i = 0;i < 10;i++){
        printf("%d ",freq[i]);
    }
        
    return 0;
}

