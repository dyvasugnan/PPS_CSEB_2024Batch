//Converting Roman into Numerical value//

#include <stdio.h>
#include <string.h>
void main(){
    int a[100],i,j=0,len;
    char roman[1000];
    printf("Enter roman value\n");
    scanf("%s",roman);
    len = strlen(roman);
    for(i=0;i<len;i++){
        if(roman[i] == 'I')
            a[i] = 1;
        else if (roman[i] == 'V')
            a[i] = 5;
        else if(roman[i] == 'X')
            a[i] = 10;
        else if(roman[i] == 'L')
            a[i] = 50;
        else if(roman[i] == 'C')
            a[i] = 100;
        else if(roman[i] == 'D')
            a[i] = 500;
        else if(roman[i] == 'M')
            a[i] = 1000;
        else{
            printf("Invalid Roman\n");
            return;
        }
    }
    
    for (i = 0; i < len; i++) {
        if (i + 1 < len && a[i] < a[i + 1]){
            j += (a[i + 1] - a[i]);
            i++; }
        else {
            j += a[i]; }
    }
    printf("Number=%d",j);
}