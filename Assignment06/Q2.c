/*2. Write a program to simulate the following library function.
a. size_t strlen(const char* str);
b. char* strcpy(char *dest, const char *src);
c. char* strcat(char *dest, const char *src);
d. int strcmp(const char *str1, const char *str2);
e. int stricmp(const char *str1, const char *str2);
f. char* strrev(char* str);
g. char* strchr(const char *str, int ch);
h. char* strstr(const char *str, const char *substr);*/

#include <stdio.h>
#include <ctype.h>  
size_t my_strlen(const char* str) {
    size_t len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

char* my_strcpy(char *dest, const char *src) {
    char *ptr = dest;
    while ((*dest++ = *src++) != '\0');
    return ptr;
}

char* my_strcat(char *dest, const char *src) {
    char *ptr = dest;
    while (*dest != '\0') {
        dest++;
    }
    while ((*dest++ = *src++) != '\0');
    return ptr;
}

int my_strcmp(const char *str1, const char *str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return *(unsigned char *)str1 - *(unsigned char *)str2;
}

int my_stricmp(const char *str1, const char *str2) {
    while (*str1 && (tolower((unsigned char)*str1) == tolower((unsigned char)*str2))) {
        str1++;
        str2++;
    }
    return tolower((unsigned char)*str1) - tolower((unsigned char)*str2);
}
char* my_strrev(char* str) {
    int len = my_strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    return str;
}

char* my_strchr(const char *str, int ch) {
    while (*str != '\0') {
        if (*str == (char)ch) {
            return (char*)str;  
        }
        str++;
    }
    return NULL;  
}

char* my_strstr(const char *str, const char *substr) {
    while (*str != '\0') {
        const char *start = str;
        const char *search = substr;
        while (*start == *search && *search != '\0') {
            start++;
            search++;
        }
        if (*search == '\0') {
            return (char*)str;  
        }
        str++;
    }
    return NULL; 
}

int main() {
    char str1[100] = "Hello World";
    char str2[100] = "Hello";
    char str3[100];

    printf("Length of str1: %zu\n", my_strlen(str1));

    my_strcpy(str3, str1);
    printf("After copying str1 to str3: %s\n", str3);
    my_strcat(str3, " Everyone");
    printf("After concatenating ' Everyone' to str3: %s\n", str3);
    printf("Comparison of str1 and str2 (strcmp): %d\n", my_strcmp(str1, str2));
    printf("Case-insensitive comparison of 'hello world' and 'HELLO WORLD': %d\n", my_stricmp("hello world", "HELLO WORLD"));
    my_strrev(str3);
    printf("After reversing str3: %s\n", str3);
    my_strrev(str3); 
    char *chr_ptr = my_strchr(str1, 'o');
    if (chr_ptr) {
        printf("First occurrence of 'o' in str1: %s\n", chr_ptr);
    } else {
        printf("'o' not found in str1.\n");
    }
    char *substr_ptr = my_strstr(str1, "World");
    if (substr_ptr) {
        printf("Substring 'World' found in str1: %s\n", substr_ptr);
    } else {
        printf("'World' not found in str1.\n");
    }
    return 0;
}

