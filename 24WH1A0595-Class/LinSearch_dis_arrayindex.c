//display index if found else -1 linear search in array
#include <stdio.h>
int linSearch(int [],int, int);
int main(){
    int arr[20],i,size;
    printf("enter size");
    scanf("%d",&size);
    printf("enter nos");
    for(i=0;i<size;i++)
    scanf("%d",&arr[i]);
    int n;
    printf("enter the value to be searched");
    scanf("%d",&n);
    
    int index= linSearch(arr, 10,n);
    printf("%d",index);
    return 0;
}

int linSearch(int x[], int size,int num){
    int i,count=0;
    for(i=0;i<size;i++){
        if (x[i] == num){
        count++;
        return i;
        }
    }
    if (count==0)
    return -1;
}



