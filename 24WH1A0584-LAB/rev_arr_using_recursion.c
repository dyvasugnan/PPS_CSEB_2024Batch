// display rev of array using recursion //

#include<stdio.h>
void rev_arr(int[],int,int);
int main(){
    int n,m=0,i;
    printf("Enter no. of elements:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    rev_arr(a,m,n);
    return 0;
}
void rev_arr(int a[],int m,int n){
    if(m>=n)
        return;
    printf("%d",a[n-1]);
    rev_arr(a,m,n-1);
}