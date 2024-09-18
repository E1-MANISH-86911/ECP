/***Write a function to check whether given character is alphabet or not. If it is alphabet, perform
its bitwise XOR operation with value 32 and observe the result.***/

#include <stdio.h>

void check_alphabet(char c) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        printf("%c is an alphabet.\n", c);
        char result = c ^ 32;
        printf("Result after XOR with 32: %c\n", result);
    } else {
        printf("%c is not an alphabet.\n", c);
    }
}

int main() {
    char c;
    printf("Enter a character: ");
    scanf(" %c", &c);
    check_alphabet(c);
    return 0;
}

