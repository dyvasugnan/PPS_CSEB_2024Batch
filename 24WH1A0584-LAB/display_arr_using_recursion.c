// display of arr using recursion //

#include<stdio.h>
void display(int[],int,int);
int main(){
    int n,i,m=0;
    printf("Enter no. of elements \n");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    display(a,m,n);
    return 0;
}
void display(int a[],int m,int n){
    if(m>=n)
        return;
    printf("%d ",a[m]);
    display(a,m+1,n);
}