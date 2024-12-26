#include<stdio.h>
int main() {
int repeated=0,i,j,n;
int arr[30],maxcount=0;
printf("enter no.of elements in array:");
scanf("%d",&n);
printf("enter the elements\n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);

for(i=0;i<n;i++){
    int frequency=1;
    for(j=i+1;j<n;j++){
        if(arr[i]==arr[j])
           frequency++;
    
    }
     if(frequency>maxcount){
         maxcount=frequency;
         repeated=arr[i];
     }
}
printf("most repeated element is:%d", repeated);


    return 0;
}
