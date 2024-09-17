/*2. Write a function to accept array elements from the user. Write another function to print array
elements. Re-use these functions in rest of the assignments wherever required.*/

#include <stdio.h>
#include "header.h"
int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int a[n];
    accept_array_elements(a, n);
    print_array_elements(a, n);
    return 0;
}


