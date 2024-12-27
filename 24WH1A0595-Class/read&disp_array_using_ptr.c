//reading elements into the array using a pointer using array and display
#include <stdio.h>
int main() {
    int a[5],i;
    int *ptr=a;
    printf("enter nos");
   for(i=0;i<5;i++){
       scanf("%d",ptr+i);
    }
    for(i=0;i<5;i++){
       printf("%d\n",*(ptr+i));
    }
    return 0;
}
