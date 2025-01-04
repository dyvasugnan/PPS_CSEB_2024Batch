
#include <stdio.h>
#include <string.h>

int romanToDecimal(char *roman) {
    int decimal = 0;
    int values[] = {100,90,50, 40, 10, 9, 5, 4, 1};
    char *symbols[] = {"C","XC","L", "XL", "X", "IX", "V", "IV", "I"};

    for (int i = 0; i < 9; i++) {
        while (strncmp(roman, symbols[i], strlen(symbols[i])) == 0) {
            decimal += values[i];
            roman += strlen(symbols[i]);
        }
    }

    return decimal;
}

int main() {
    char roman[10];

    printf("Enter a Roman numeral (I-L): ");
    scanf("%s", roman);

    int decimal = romanToDecimal(roman);

    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}
