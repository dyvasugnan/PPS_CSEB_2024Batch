#include<stdio.h>
int main(){
int n,i,j,count=0,x=0;
printf("enter num:\n");
scanf("%d",&n);
int arr[n];
printf("enter %d elements:\n",n);
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
   for(i=0;i<n-1;i++){
//int check=arr[i];
      count=0;
        for(j=0;j<n;j++){
            if(arr[i]==arr[j])
            count++;
            
            }
         if(count==1){
         x++;
         printf("%d ",arr[i]);
}

}
if(x==0)
printf("0");

//if(x0)
//printf("0");
return 0;
}





