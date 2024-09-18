/**Write a function to find and replace a string without using library functions.***/

#include <stdio.h>

void findAndReplace(char *source, const char *find, const char *replace) {
    char temp[200];
    int i, j, k;
    int findLen = 0;
    int replaceLen = 0;

    while (find[findLen] != '\0') findLen++;
    while (replace[replaceLen] != '\0') replaceLen++;

    int tempIndex = 0;

    for (i = 0; source[i] != '\0'; i++) {
        for (j = 0; j < findLen; j++) {
            if (source[i + j] != find[j]) break;
        }

        if (j == findLen) {
            for (k = 0; k < replaceLen; k++) {
                temp[tempIndex++] = replace[k];
            }
            i += findLen - 1;
        } else {
            temp[tempIndex++] = source[i];
        }
    }

    temp[tempIndex] = '\0';

    for (i = 0; temp[i] != '\0'; i++) {
        source[i] = temp[i];
    }
    source[i] = '\0';
}

int main() {
    char source[200] = "This is test time";
    char find[] = "is";
    char replace[] = "was";

    printf("Original String: %s\n", source);
    findAndReplace(source, find, replace);
    printf("Modified String: %s\n", source);

    return 0;
}

