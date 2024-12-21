#include<stdio.h>
char ascending(char []);
int main() {
    int i;
    char a[5];
    printf("enter 4digt number");
    for(i=0; i<4; i++)
        scanf("%c",&a[i]);
        ascending(a);
        for(i=0;i<4;i++)
    printf("%c",a[i]);
    return 0;
}
char ascending(char a[]) {
    int i,j,temp;
    for(i=0; i<3; i++) {
        for(j=i+1; j<4; j++) {
            if(a[i]>a[j]) {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}