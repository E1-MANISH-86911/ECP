#include <stdio.h>
#include "header.h"

void accept_array_elements(int a[], int n){
	printf("Enter array elements: ");
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
}

void print_array_elements(int a[], int n){
	printf("Array elements are: ");
	for(int i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
}
