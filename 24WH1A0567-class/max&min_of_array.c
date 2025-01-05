#include<stdio.h>

int main () {
   int ar[10];
   int n;
   int count=0;
   printf("enter no of elemnts u want in array");
   scanf("%d",&n);
   printf("enter elements in an array");
   for(int i=0;i<n;i++) {
   scanf("%d",&ar[i]);
   }
   int max=ar[0];
   int min =ar[0];
   for(int i=0;i<n;i++){
      if(max<ar[i])
      max=ar[i];
   }
         for(int i=0;i<n;i++){
       if(min>ar[i])
       min=ar[i];
   }

   printf("%d\n",max);
    printf("%d",min);
return 0;
}
