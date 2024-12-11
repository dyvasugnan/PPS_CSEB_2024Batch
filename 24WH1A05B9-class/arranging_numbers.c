#include<stdio.h>
int arranging_numbers(int ,int[]);
int main(){
    int num,i,j,arr[num];
    printf("enter the number for elements");
    scanf("%d",&num);
    printf("\nenter the elements\n");
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    arranging_numbers(num,arr);
    printf("%d",arr);
    return 0;

}
 int arranging_numbers(int num, int arr[]){
    int i,j,temp;

  for (i = 0; i < num - 1; i++) {
        for (j = i + 1; j < num; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("increasing order given numbers\n");
    for(i=0;i<num;i++){
      printf("%d",arr[i]);
    }
    
 }