//program to convert decimal into binary
#include<stdio.h>
int main(){
  int r,a[225],num,j,i=0;
  printf("enter any no");
  scanf("%d",&num);
  while(num!=0){
     r=num%2;
	 a[i]=r;
	 num=num/2;
	  i++;
	  }
for(j=i-1;j>=0;j--){
    printf("%d",a[j]);
	}
return 0;
}
