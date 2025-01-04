//pyramid pattern
#include<stdio.h>
int main(){
    int n,i,j,k;
    printf("Enter no. of rows:\n");
    scanf("%d",&n);
    //i=no.of rows
    for(i=1;i<=n;i++){
        //j=space required
        for(j=i;j<n;j++){
            printf(" ");
        }
            for(k=1;k <= (2*i-1);k++){
                //k=stars
                printf("*");
        } printf("\n");
    }
    return 0;
}
