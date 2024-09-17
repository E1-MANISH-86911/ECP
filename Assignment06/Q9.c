/*9. Write a function to find and replace a string using library functions [strstr(), strncpy(), strlen(),
strcat(), strcpy(), etc.].
Input :
Source : This is test time
Find
: is
Replace: was
Output:
Thwas was test time*/
#include <stdio.h>
#include <string.h>
void find_and_replace(char *source, const char *find, const char *replace) {
    char buffer[256]; 
    char *pos;
    size_t find_len = strlen(find);
    size_t replace_len = strlen(replace);
    size_t prefix_len;
    buffer[0] = '\0';
    pos = strstr(source, find);
    if (pos != NULL) {
        prefix_len = pos - source;
        strncpy(buffer, source, prefix_len);
        buffer[prefix_len] = '\0';
        strcat(buffer, replace);
        strcat(buffer, pos + find_len);
        strcpy(source, buffer);
    }
}
int main() {
    char source[256] = "This is test time";
    const char *find = "is";
    const char *replace = "was";
    find_and_replace(source, find, replace);
    printf("Modified string: %s\n", source);
    return 0;
}

