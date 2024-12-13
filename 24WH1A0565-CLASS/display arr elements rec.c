#include<stdio.h>
void display(int[],int);
int main(){
  int n[]={1,2,3,4,5};
  int s=sizeof(n);
  display(n,((s/4)-1));
}
void display(int n[],int s){
  if(s==0){
  printf("%3d",n[s]);
  return;
  }
  fact(n,s-1);
  printf("%3d",n[s]);
  return;
}
