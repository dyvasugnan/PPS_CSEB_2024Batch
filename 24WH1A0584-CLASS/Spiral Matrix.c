#include<stdio.h>
int main(){
    int a[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int i,r=4,c=4,top=0,bot=r-1,left=0,right=c-1;
    while(top<=bot||left<=right){
        for(i=left;i<=right;i++)
            printf ("%d",a[top][i]);
            top++;
        for(i=top;i<=bot;i++)
            printf ("%d",a[i][right]);
            right--;
        for(i=right;i>=left;i--)
            printf ("%d",a[bot][i]);
            bot--;
        for(i=bot;i>=top;i--)
            printf ("%d",a[i][left]);
            left++;
    }
    return 0;
}