/****Write a function to find and replace a string using library functions [strstr(), strncpy(), strlen(),
strcat(), strcpy(), etc.].
Input :
Source : This is test time
Find
: is
Replace: was
Output:
Thwas was test time******/
#include <stdio.h>

#include <string.h>

void findAndReplace(char* source, char* find, char* replace) {
    char* ptr = strstr(source, find);
    while (ptr != NULL) {
        int find_len = strlen(find);
        int replace_len = strlen(replace);
        memmove(ptr + replace_len, ptr + find_len, strlen(ptr + find_len) + 1);
        strncpy(ptr, replace, replace_len);
        ptr = strstr(ptr + replace_len, find);
    }
}

int main() {
    char source[100] = "This is test time";
    char find[] = "is";
    char replace[] = "was";

    printf("Original string: %s\n", source);
    findAndReplace(source, find, replace);
    printf("Modified string: %s\n", source);

    return 0;
}

