//linear searching 
#include<stdio.h>
int main(){

       int a[5];
       
       int num,i,n;
       
       printf("enter no.of elements to be printed");
       
       scanf("%d",&n);
       
       printf("enter array elements:\n");
       
       for(i=0;i<n;i++){
       scanf("%d",&a[i]);
       }
       
       //printf("array elements are:%d",a[i]);
       
       printf("enter any number");
       scanf("%d",&num);
   
   for(i=0;i<n;i++){
       if(a[i]==num){
         printf("element is found "); 
         }
       else{
          printf("element is not found");  
        }  
}
return 0;
}