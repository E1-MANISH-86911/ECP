/*7. Write a function to sort the array using selection or bubble sort.*/
#include<stdio.h>
#include"header.h"
void bubble_sort(int a[], int n);
int main(){
	int n;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	int a[n];
	accept_array_elements(a, n);
	printf("Array elements before sorting: \n");
	print_array_elements(a, n);
	bubble_sort(a, n);
	printf("Array elements after sorting: \n");
	print_array_elements(a, n);
	return 0;
}
void bubble_sort(int a[], int n){
	int temp;
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-i-1; j++){
			if(a[j]>a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}
