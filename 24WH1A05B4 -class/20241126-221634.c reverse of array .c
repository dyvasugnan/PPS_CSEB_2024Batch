#include<stdio.h>
int main(){
 int a[9]={10,3,2,4,6,7,8,9,22};
 int i;
 for(i=0;i<9;i++){
  printf("%d ",a[i]);
}
printf("\n");
 for(i=8;i>=0;i--){
  printf("%d ",a[i]);
  }
return 0;
}