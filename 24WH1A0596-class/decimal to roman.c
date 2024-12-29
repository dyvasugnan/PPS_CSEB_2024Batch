
#include <stdio.h>

void decimalToRoman(int num) {
    int val[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char* syb[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    
    if (num == 0) {
        return;
    }
    
    for (int i = 0; i < 13; i++) {
        if (num >= val[i]) {
            
            printf("%s", syb[i]);
            decimalToRoman(num - val[i]);
            return;
        }
    }
}

int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    printf("Roman numeral representation: ");
    decimalToRoman(num);
    printf("\n");

    return 0;
}