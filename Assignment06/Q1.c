/*1. Write a program to demonstrate use of string library functions.
a. strlen()
e. stricmp()
i. strncpy()
b. strcpy()
f. strrev()
j. strncat()
c. strcat()
g. strchr()
k. strncmp()
d. strcmp()
h. strstr()*/

#include <stdio.h>
#include <string.h>
#include <strings.h>  // For strcasecmp() in POSIX systems

int main() {
    char str1[100] = "Hello";
    char str2[100] = "World";
    char str3[100];  // Temporary string

    // a. strlen()
    printf("Length of str1: %zu\n", strlen(str1));

    // b. strcpy()
    strcpy(str3, str1);
    printf("After copying str1 to str3: %s\n", str3);

    // c. strcat()
    strcat(str1, " World");
    printf("After concatenating ' World' to str1: %s\n", str1);

    // d. strcmp()
    printf("Comparison of str1 and str2 (strcmp): %d\n", strcmp(str1, str2));

    // e. stricmp() -> use strcasecmp()
    printf("Case-insensitive comparison of str1 and 'HELLO WORLD' (strcasecmp): %d\n", strcasecmp(str1, "HELLO WORLD"));

    // f. strrev() is non-standard in modern compilers. Using a built-in implementation in some compilers like Turbo C++
    // In modern compilers, you'd need a custom implementation.
    printf("Skipping strrev() as it's not available in standard libraries.\n");

    // g. strchr()
    char *chr_ptr = strchr(str1, 'o');
    if (chr_ptr) {
        printf("First occurrence of 'o' in str1: %s\n", chr_ptr);
    } else {
        printf("'o' not found in str1.\n");
    }

    // h. strstr()
    char *substr_ptr = strstr(str1, "World");
    if (substr_ptr) {
        printf("Substring 'World' found in str1: %s\n", substr_ptr);
    } else {
        printf("'World' not found in str1.\n");
    }

    // i. strncpy()
    strncpy(str2, "New", 3);
    str2[3] = '\0';  // Add null terminator manually
    printf("After copying 3 characters from 'New' to str2: %s\n", str2);

    // j. strncat()
    strncat(str1, " Day", 4);
    printf("After concatenating ' Day' to str1: %s\n", str1);

    // k. strncmp()
    printf("Comparison of first 3 characters of str1 and 'New' (strncmp): %d\n", strncmp(str1, "New", 3));

    // l. strtok()
    char str4[100] = "Hello World Day!";
    char *token = strtok(str4, " ");
    printf("Tokens in str4:\n");
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }

    return 0;
}

