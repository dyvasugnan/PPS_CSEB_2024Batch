// display array elements
#include<stdio.h>
int display_array(int [][3]);
int main(){
    int a[3][3], i,j;

    printf("enter the elements\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }printf("\n");
    display_array(  a);

    return 0;

}
int display_array(int  a[][3]){
    int i,j;
    for( i=0;i<3;i++){
        for( j=0;j<3;j++){
            printf("%d",a[i][j]);
        }
    }
}