#include<stdio.h>
 int main(){
 int i,j;
for(i=0;i<4;i++){
 for(j=0;j<4;j++){
  if(i==3||i==0)
     printf("-");
else if(j==3||j==0)
     printf("|  ");
  }
printf("\n");

}
return 0;
}

