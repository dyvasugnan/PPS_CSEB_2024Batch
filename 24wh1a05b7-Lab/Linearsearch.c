//finding linear search 
  #include <stdio.h>
int linearsearch(int[],int,int);
int main(){
    int arr[50];
    int n,num,index,i;
    printf("Enter size of array\n");
    scanf("%d",&n);
    printf("Enter elements of the array\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to search:\n");
    scanf("%d",&num);
    index=linearsearch(arr,n,num);
    if(index!=1){
    printf("the number is found in index %d\n",index);
    }else 
    printf("The number is not found");
   
    return 0;
    }
    int linearsearch(int arr[],int n,int num){
        int i,index;
        for(i=0;i<n;i++){
            if(num==arr[i]){
                
                return i;
    }
    }
        return 1;
    }