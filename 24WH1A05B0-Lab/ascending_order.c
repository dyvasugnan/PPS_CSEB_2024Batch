#include<stdio.h>
void ascending_order(int a[10]);
int main() {
    int num[10],i;
    for(i=0;i<4;i++){
        scanf("%d",&num[i]);
    }
    ascending_order(num);
    return 0;
}
void ascending_order(int a[10]){
int i,j,temp;
for(i=0;i<4;i++){
        for(j=i+1;j<=4;j++){
                if(a[i]>a[j]){
                        temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
}
}
}
printf("number in ascending order is:");
for(i=0;i<4;i++){
    printf("%4d",a[i]);
}
}
