/**Write a function to print a given number in words.****/
/**
#include<stdio.h>
#include<string.h>

void printNumberInWords(int num) {
    const char *ones[] = {"","one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    const char *teens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    const char *tens[] = {"","", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

    if (num < 10) {
        printf("%s", ones[num]);
    } else if (num < 20) {
        printf("%s", teens[num - 10]);
    } else if (num < 100) {
        printf("%s-%s", tens[num / 10], ones[num % 10]);
    } else if (num < 1000) {
        printf("%s hundred", ones[num / 100]);
        if (num % 100 != 0) {
            printf(" and ");
            printNumberInWords(num % 100);
        }
    } else if (num < 1000000) {
        printNumberInWords(num / 1000);
        printf(" thousand");
        if (num % 1000 != 0) {
            printf(" ");
            printNumberInWords(num % 1000);
        }
    }
}
int main() {
    int num = 12345;
    printNumberInWords(num);
    return 0;
	}
	***/

#include <stdio.h>

void printTwoDigits(int num);
void printThreeDigits(int num);

// Arrays for words corresponding to digits
char *single_digits[] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
char *two_digits[] = { "", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };
char *tens_multiple[] = { "", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };
char *suffixes[] = { "", "thousand", "million", "billion", "trillion" };

void printTwoDigits(int num) {
    if (num < 10) {
        printf("%s ", single_digits[num]);
    } else if (num < 20) {
        printf("%s ", two_digits[num - 10]);
    } else {
        printf("%s ", tens_multiple[num / 10]);
        if (num % 10 != 0) {
            printf("%s ", single_digits[num % 10]);
        }
    }
}

void printThreeDigits(int num) {
    if (num >= 100) {
        printf("%s hundred ", single_digits[num / 100]);
        num %= 100;
    }
    if (num > 0) {
        printf("and ");
        printTwoDigits(num);
    }
}

void printNumberInWords(long long num) {
    if (num == 0) {
        printf("zero\n");
        return;
    }

    int parts[5] = {0}; // To store groups of 3 digits (e.g., thousands, millions, etc.)
    int i = 0;

    // Breaking the number into parts of 3 digits
    while (num > 0) {
        parts[i++] = num % 1000;
        num /= 1000;
    }

    // Printing each part with the appropriate suffix
    for (int j = i - 1; j >= 0; j--) {
        if (parts[j] > 0) {
            printThreeDigits(parts[j]);
            if (suffixes[j][0] != '\0') {
                printf("%s ", suffixes[j]);
            }
        }
    }
    printf("\n");
}

int main() {
    long long number;

    printf("Enter a large number: ");
    scanf("%lld", &number);

    if (number < 0) {
        printf("Please enter a positive number.\n");
    } else {
        printNumberInWords(number);
    }

    return 0;
}

