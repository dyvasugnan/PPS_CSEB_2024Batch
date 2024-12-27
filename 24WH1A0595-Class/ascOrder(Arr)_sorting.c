//Sorting array of integers in ascending order
#include <stdio.h>
void ascOrder(int array[], int size) {
  for (int i = 1; i < size; i++) {
    int max = array[i];
    int j = i - 1;
    while (j >=0 && max < array[j]) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = max;
  }
}
int main(){
   int arr[20],n,i;
   printf("enter size of array required\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
  ascOrder (arr, n);
  printf("Sorted array in ascending order:\n");
    for ( i = 0; i <n; i++) {
    printf("%d ", arr[i]);
  }
return 0;
}
