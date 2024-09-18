/**char* strchr(const char *str, int ch);*******/

#include <stdio.h>

char* strchr(const char *str, int ch) {
    int i = 0;
    for (; str[i] != '\0'; i++) {
        if (ch == str[i]) {
            return (char*)str + i; // Return pointer to the first occurrence
        }
    }
    return NULL; // Return NULL if character not found
}

int main() {
    char str[20] = "manish";
    char *ptr = strchr(str, 'a');

    //char *ptr = strchr(str, 'm');
    if (ptr != NULL) {
        printf("Found 'a' at address: %p\n", ptr);
        printf("Found 'a' at index: %d\n", ptr - str);
    } else {
        printf("Character 'a' not found.\n");
    }
    return 0;
}
