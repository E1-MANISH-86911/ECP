/*6. Write a function to remove duplicate elements from the array. After processing the array should
store only the unique elements consecutively. Also function should return the number of unique
elements into the array.*/

#include<stdio.h>
#include"header.h"
int remove_duplicates(int a[], int n);
int main(){
	int n;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	int a[n];
	accept_array_elements(a, n);
	n = remove_duplicates(a, n);
	printf("After removing the duplicate elements: \n");
	print_array_elements(a, n);
	return 0;
}
int remove_duplicates(int a[], int n) {
    int i, j, k;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; ) {
            if (a[i] == a[j]) {
                for (k = j; k < n - 1; k++) {
                    a[k] = a[k + 1];
                }
                n--;
            } else {
                j++;
            }
        }
    }
    return n; 
}

