/*6. Write a function to which accepts a number, base and character pointer and converts number to
a string i.e. simulate itoa().*/
#include <stdio.h>
char* my_itoa(int value, char *str, int base) {
    char *ptr = str, *ptr1 = str, temp_char;
    int temp_value;

    if (value < 0 && base == 10) {
        *ptr++ = '-';
        value = -value;
    }

    do {
        temp_value = value;
        value /= base;
        *ptr++ = "0123456789ABCDEF"[temp_value - value * base];
    } while (value);

    *ptr-- = '\0';

    while (ptr1 < ptr) {
        temp_char = *ptr;
        *ptr-- = *ptr1;
        *ptr1++ = temp_char;
    }

    return str;
}

int main() {
    char buffer[20];
    printf("itoa result: %s\n", my_itoa(12345, buffer, 10));
    return 0;
}

