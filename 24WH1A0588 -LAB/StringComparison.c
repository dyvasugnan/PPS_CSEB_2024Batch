#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "hello";
    char str2[] = "hello";
    char str3[] = "world";

    int result1 = strcmp(str1, str2); 
    int result2 = strcmp(str1, str3); 

    if (result1 == 0) {
        printf("str1 and str2 are equal.\n");
    } else {
        printf("str1 and str2 are not equal.\n");
    }

    if (result2 == 0) {
        printf("str1 and str3 are equal.\n");
    } else {
        printf("str1 and str3 are not equal.\n");
    }

    return 0;
}
