#include <stdio.h>
int main(){
    FILE *fp1;
    char ch;
    fp1 =fopen("sample.txt","w");
    if(fp1 == NULL){
        printf("file not created");
        return 1;
    }
    printf("fp1,hello");
    printf("fp1,file created");
    fclose(fp1);
    printf("file created");
    return 0;
}
    
    
