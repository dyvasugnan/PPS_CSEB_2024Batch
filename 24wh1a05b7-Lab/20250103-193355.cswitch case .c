//switch case
#include<stdio.h>
int main() {
    int n1,n2,n;
    scanf("%d%d",&n1,&n2);
    printf("enter num");
    scanf("%d",&n);
    switch(n) {
    case 1:
        printf("%d",n1+n2);
        break;
    case 2:
        printf("%d",n1-n2);
        break ;
    default:
        printf("invalid");

    }
    return 0;
}