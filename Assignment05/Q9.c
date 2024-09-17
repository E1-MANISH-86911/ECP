/*9. Write a function to search the given number into the array using binary search and return the
index of the element. If element is not found it should return -1.*/
#include<stdio.h>
#include"header.h"
int binary_search(int a[], int n, int k, int low, int high);
int main(){
	int n, k;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	int a[n];
	accept_array_elements(a, n);
	print_array_elements(a, n);
	printf("Enter a key to search into the array elements: ");
	scanf("%d", &k);
	int output = binary_search(a, n, k, 0, n-1);
	if(output>=0)
		printf("Key %d found at array index %d\n", k, output);
	else
		printf("Key %d is not present in the array.\n", k);
	return 0;
}
int binary_search(int a[], int n, int k, int low, int high){
	int mid = low + (high-low);
	if(a[mid]==k)
		return mid;
	else if(a[mid]>k)
		return binary_search(a, n, k, 0, mid-1);
	else if(a[mid]<k)
		return binary_search(a, n, k, mid+1, high-1);
	else 
		return -1;
}
