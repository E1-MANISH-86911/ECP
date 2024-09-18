/***strrev()***/

#include<stdio.h>
#include<string.h>
/***
int main() {
    char a[6] = "hello";
    printf("%s\n", a);

    int len = strlen(a);
    int i;
    for (i = len - 1; i >= 0; i--) {
        printf("%c", a[i]);
    }
    printf("\n");

    return 0;
}***/
int main() {
    char a[6] = "hello";
    printf("%s\n", a);

    int len = strlen(a);
    int i, j;
    for (i = 0, j = len - 1; i < j; i++, j--) {
        char temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    printf("%s\n", a);
    return 0;
}

