/*5. Write a function to calculate maximum and minimum of the array elements.*/
#include<stdio.h>
#include"header.h"
int maximum(int a[], int n);
int minimum(int a[], int n);
int main(){
	int n;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	int a[n];
	accept_array_elements(a, n);
	printf("Maximum element of the array: %d\n", maximum(a, n));
	printf("Minimum element of the array: %d\n", minimum(a, n));
	return 0;
}
int maximum(int a[], int n){
	int max=0;
	for(int i=0; i<n; i++){
		if(a[i]>max)
			max = a[i];
	}
	return max;
}
int minimum(int a[], int n){
	int min=a[0];
	for(int i=0; i<n; i++){
		if(a[i]<min){
			min = a[i];
		}
	}
	return min;
}
