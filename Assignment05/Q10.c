/*10. Write a function to search the given number into the array using linear search and return the
address of the element. If element is not found it should return NULL.*/
#include<stdio.h>
#include"header.h"
int* search_key(int a[], int n, int k);
int main(){
	int n, k;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	int a[n];
	accept_array_elements(a, n);
	print_array_elements(a, n);
	printf("Enter a key to search into the array elements: ");
	scanf("%d", &k);
	int *output = search_key(a, n, k);
	if(output!=NULL)
		printf("Key %d found at array index %ld\n", k, output-a);
	else
		printf("Key %d is not present in the array.\n", k);
	return 0;
}
int* search_key(int a[], int n, int k){
	for(int i=0; i<n; i++){
		if(a[i]==k){
			return &a[i];
		}
	}
	return NULL;
}
