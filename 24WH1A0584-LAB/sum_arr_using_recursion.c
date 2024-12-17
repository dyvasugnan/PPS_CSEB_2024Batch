// sum of arr using recursion //

#include<stdio.h>
int  sum_arr(int[],int,int);
int main(){
    int i,n,m=0,display;
    printf("Enter no. of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    display=sum_arr(a,m,n);
    printf("%d\n",display);
    return 0;
}
int sum=0;
int sum_arr(int a[],int m,int n){
    if(m>=n)
        return sum;
    sum=sum+a[m];
    return sum_arr(a,m+1,n);
}