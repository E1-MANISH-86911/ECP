/*3. Write a function to reverse the array elements.*/
#include<stdio.h>
#include "header.h"
void reverse(int a[], int n);
int main(){
	int n;
	printf("Enter the size of array: \n");
	scanf("%d", &n);
	int a[n];
	accept_array_elements(a, n);
	print_array_elements(a, n);
	reverse(a, n);
	return 0;
}
void reverse(int a[], int n){
	printf("Array elements in reverse order: ");
	for(int i=n-1; i>=0; i--){
		printf("%d ", a[i]);
	}
	printf("\n");
}
