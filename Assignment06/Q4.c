/*4. Write a function to remove all occurrences of any character in string1 from the string2.*/
#include <stdio.h>
void remove_chars(char *str1, const char *str2) {
    char *src = str1, *dest = str1;
    while (*src) {
        const char *p = str2;
        int found = 0;
        while (*p) {
            if (*src == *p) {
                found = 1;
                break;
            }
            p++;
        }
        if (!found)
            *dest++ = *src;
        src++;
    }
    *dest = '\0';
}

int main() {
    char str1[] = "hello world";
    char str2[] = "lo";
    remove_chars(str1, str2);
    printf("Result: %s\n", str1);
    return 0;
}

