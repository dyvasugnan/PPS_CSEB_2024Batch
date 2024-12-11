#include <stdio.h>

int main() {

    char str[1000];
    int a[10]={0};
    scanf("%s",str);
    int i;
    
    for(i=0;str[i]!='\0';i++){
        if(str[i]=='0')
        a[0]=a[0]+1;
        if(str[i]=='1')
        a[1]=a[1]+1;
        if(str[i]=='2')
        a[2]=a[2]+1;
        if(str[i]=='3')
        a[3]=a[3]+1;
        if(str[i]=='4')
        a[4]=a[4]+1;
        if(str[i]=='5')
        a[5]=a[5]+1;
        if(str[i]=='6')
        a[6]=a[6]+1;
        if(str[i]=='7')
        a[7]=a[7]+1;
        if(str[i]=='8')
        a[8]=a[8]+1;
        if(str[i]=='9')
        a[9]=a[9]+1;
        
    } 
    for(i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    return 0;
}

