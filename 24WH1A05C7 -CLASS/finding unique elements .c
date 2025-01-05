#include<stdio.h>

int main()
{
    int a[5],i,j,c=0;
    printf("enter array elements");
    for(i=0;i<5;i++){
    scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
    printf("%d\n",a[i]);
    }
    printf("unique elements are\n");
    for(i=0;i<5;i++){
    c=0;
    for(j=0;j<5;j++){
    if (i!=j){
    if(a[i]==a[j]){
    c++;
    }
    }
    }
    if(c==0){
    printf("%d\n",a[i]);
    }
    }
    
    return 0;
}