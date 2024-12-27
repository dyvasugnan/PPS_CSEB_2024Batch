//reading elements into the array using a pointer display reverse order
#include <stdio.h>
int main() {
    int a[5],i;
    int *ptr=a;
    printf("enter nos");
   for(i=0;i<5;i++){
       scanf("%d",ptr+i);
    }
   printf("reverse order: ");
    for(int i= 5-1;i>=0;i--){
        printf("%d  ",*(ptr+i)); 
    }
    return 0;
}
