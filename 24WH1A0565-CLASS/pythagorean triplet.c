#include<stdio.h>
int main(){
    int i,j,k;
    for(i=1;i<=977;i++){
      for(j=1;j<i;j++){
        for(k=1;k<j;k++){
          if(i+j+k == 1000 && (j*j + k*k == i*i)){
          printf("%d %d %d %d",i,j,k,i*j*k);
          return 0;
         }
        }
      }
    }
}
