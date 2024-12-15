
#include<stdio.h>
int linearsearching(int n,int a[n],int element){
    int index;
    if (n<0)
        return index=-1;
    if (a[n]==element)
       return index=n;
    
    return linearsearching(n-1,a,element);
}

int main(){
    int n,element,i;
    scanf("%d%d",&n,&element);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int index=linearsearching(n-1,a,element);
    if(index>0)
       printf("element present in an  array at index=%d",index);
     else
        printf("element  not present in an  array");
    return 0;
}

