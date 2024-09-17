/*10. Write a function to find and replace a string without using library functions.*/
#include <stdio.h>
size_t strlen_custom(const char *str) {
    size_t length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

char *strstr_custom(const char *haystack, const char *needle) {
    size_t needle_len = strlen_custom(needle);
    if (needle_len == 0) return (char *)haystack; 

    for (const char *p = haystack; *p != '\0'; p++) {
        if (strncmp_custom(p, needle, needle_len) == 0) {
            return (char *)p;
        }
    }
    return NULL;
}

int strncmp_custom(const char *str1, const char *str2, size_t n) {
    for (size_t i = 0; i < n; i++) {
        if (str1[i] != str2[i]) return str1[i] - str2[i];
        if (str1[i] == '\0') return 0;
    }
    return 0;
}

void strncpy_custom(char *dest, const char *src, size_t n) {
    for (size_t i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    if (n > 0) {
        dest[n] = '\0'; 
    }
}
void strcat_custom(char *dest, const char *src) {
    while (*dest) {
        dest++;
    }
    while (*src) {
        *dest++ = *src++;
    }
    *dest = '\0'; 
}
void find_and_replace_custom(char *source, const char *find, const char *replace) {
    char buffer[256]; 
    char *pos;
    size_t find_len = strlen_custom(find);
    size_t replace_len = strlen_custom(replace);
    size_t prefix_len;
    buffer[0] = '\0';
    pos = strstr_custom(source, find);
    if (pos != NULL) {
        prefix_len = pos - source;
        strncpy_custom(buffer, source, prefix_len);
        strcat_custom(buffer, replace);
        strcat_custom(buffer, pos + find_len);
        strncpy_custom(source, buffer, strlen_custom(buffer) + 1);
    }
}

int main() {
    char source[256] = "This is test time";
    const char *find = "is";
    const char *replace = "was";

    find_and_replace_custom(source, find, replace);

    printf("Modified string: %s\n", source);

    return 0;
}


