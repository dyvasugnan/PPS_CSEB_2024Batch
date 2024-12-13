//finding largest element in the array using dynamic memory allocation //

#include<stdio.h>
#include<stdlib.h>
int main(){
    int n=5,i,largest;
    int *ptr;
    ptr=(int*)malloc(n*sizeof(int));
    printf("Enter %d elements\n",n);
    for(i=0;i<5;i++)
        scanf("%d",ptr+i);
    largest=ptr[0];
    for(i=1;i<5;i++){
        if(*(ptr+i)>largest)
            largest=*(ptr+i);
    }
    printf("largest=%d",largest);
    free(ptr);
    return 0;
}