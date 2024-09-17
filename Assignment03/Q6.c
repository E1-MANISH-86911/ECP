/*6. Write a program to accept a number and print all factors excluding the number
Input: 24
Output: all factors: 1, 2, 3, 4, 6, 8, 12*/

#include <stdio.h>
int main() {
    int n, i = 1;
    printf("Input: ");
    scanf("%d", &n);
    if (n <= 1) {
        printf("No factors\n");
        return 0;
    }
    printf("Output: all factors: ");
    int check = 0;
    while (i <= n / 2) {
        if (n % i == 0) {
            if (check) {
                printf(", ");
            }
            printf("%d", i);
            check = 1;
        }
        i++;
    }
    printf("\n");
    return 0;
}

