//arranging 4-digit number in ascending order//
#include<stdio.h>
void ascending_order(int n[]);
int main(){
        int n[4],i;
        printf("Enter any 4-digit number:\n");
        for(i=0;i<4;i++){
            scanf("%d",&n[i]);
        }
        ascending_order(n);
        printf("Ascending order of the given 4-digit number is:\n");
        for(i=0;i<4;i++){
            printf("%d",n[i]);
        }
        return 0;
}
void ascending_order(int n[]){
        int temp,i,j;
        for(i=0;i<3;i++){
            for(j=0;j<3-i;j++){
                if(n[j]>n[j+1]){
                    temp=n[j];
                    n[j]=n[j+1];
                    n[j+1]=temp;
                 }
            }
        }
}