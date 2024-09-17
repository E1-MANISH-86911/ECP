/*8. Write a function to print a given number in words.*/
#include <stdio.h>
void number_to_words(int n) {
    const char *ones[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    const char *teens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    const char *tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    const char *thousands[] = {"", "thousand", "million", "billion"};

    if (n == 0) {
        printf("zero");
        return;
    }

    if (n >= 1000) {
        printf("%s thousand ", ones[n / 1000]);
        n %= 1000;
    }
    if (n >= 100) {
        printf("%s hundred ", ones[n / 100]);
        n %= 100;
    }
    if (n >= 20) {
        printf("%s ", tens[n / 10]);
        n %= 10;
    }
    if (n >= 10 && n < 20) {
        printf("%s ", teens[n - 10]);
    } else if (n > 0) {
        printf("%s ", ones[n]);
    }
}

int main() {
    number_to_words(1234);
	printf("\n");
    return 0;
}

