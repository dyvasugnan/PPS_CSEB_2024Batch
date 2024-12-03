#include<stdio.h>
int main() {
    int n,i,j;
   
    char c='A';
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        for( int j=i;j<=i;j++){
            for(int k=i;k<2*i;k++){
                printf("%c\t",c);
                c++;
            }
        c--;
      
        for(int k=2*i+1;k<=2*i+1+i;k++){
          c--;
           if(c>='A'&&c<='Z'){
                printf("%c\t",c);
            }
        }
        }  
        c='A';
        printf("\n");
    }
   
    
    return 0;
}