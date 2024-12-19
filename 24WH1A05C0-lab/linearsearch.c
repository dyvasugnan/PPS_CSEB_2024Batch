#include<stdio.h>
void linear_search(int[],int);
int main(){
int arr[5];
int linear_num;
int i;
printf("enter elements in array:");
for(i=0;i<5;i++){
      scanf("%d",&arr[i]);
}
printf("enter the linear number");
scanf("%d",&linear_num);

    for(i=0;i<5;i++){
       if(arr[i]==linear_num){
           break;
        }
       else{
        continue;
       }
    }

if(arr[i]==linear_num){
                    printf("The array have the same number as linear number");
        }
else{
    printf("The array does not have the same number as linear number");
  }
return 0;
}
