//Roman numeral to decimal equivalent
#include <stdio.h>
#include <string.h>

int romanToDecimal(char c) {
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        default: return 0;
    }
}

int convertRomanToDecimal(char *roman) {
    int total = 0;
    int length = strlen(roman);

    for (int i = 0; i < length; i++) {
        int current = romanToDecimal(roman[i]);
        int next = (i + 1 < length) ? romanToDecimal(roman[i + 1]) : 0;

        if (current < next) {
            total -= current;
        } else {
            total += current;
        }
    }

    return total;
}

int main() {
    char roman[20];
    printf("Enter a Roman numeral (I to L): ");
    scanf("%s", roman);

    int decimal = convertRomanToDecimal(roman);
    printf("The decimal equivalent of %s is %d\n", roman, decimal);

    return 0;
}

