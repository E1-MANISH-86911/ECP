/*5. Write a function to converts a string of digits into its numeric equivalent i.e. simulate atoi().
int atoi(const char* string);*/
#include <stdio.h>
int my_atoi(const char *str) {
    int result = 0, sign = 1;
    if (*str == '-') {
        sign = -1;
        str++;
    }
    while (*str >= '0' && *str <= '9') {
        result = result * 10 + (*str - '0');
        str++;
    }
    return sign * result;
}
int main() {
    printf("Result: %d\n", my_atoi("-12345"));
    return 0;
}

