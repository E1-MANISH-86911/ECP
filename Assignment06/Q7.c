/*7. Write a function to convert a number to its roman equivalent. Also write a function to convert a
roman number to decimal equivalent*/
#include <stdio.h>
#include <string.h>
void int_to_roman(int num, char* result) {
    char *roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    result[0] = '\0';  
    for (int i = 0; i < 13; i++) {
        while (num >= values[i]) {
            strcat(result, roman[i]);
            num -= values[i];
        }
    }
}
int roman_to_int(const char *roman) {
    int values[256] = {0}; 
    values['I'] = 1;
    values['V'] = 5;
    values['X'] = 10;
    values['L'] = 50;
    values['C'] = 100;
    values['D'] = 500;
    values['M'] = 1000;
    int result = 0;
    int i = 0;
    while (roman[i] != '\0') {
        if (roman[i + 1] != '\0' && values[(int)roman[i]] < values[(int)roman[i + 1]]) {
            result -= values[(int)roman[i]];
        }
        else {
            result += values[(int)roman[i]];
        }
        i++;
    }

    return result;
}

int main() {
    int number;
    char roman[100];

    printf("Enter an integer: ");
    scanf("%d", &number);
    int_to_roman(number, roman);
    printf("Roman numeral equivalent: %s\n", roman);

    char roman_input[100];
    printf("Enter a Roman numeral: ");
    scanf("%s", roman_input);
    int decimal = roman_to_int(roman_input);
    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}

