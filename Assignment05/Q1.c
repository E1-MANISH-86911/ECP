/*1. Write a program to accept marks of five subjects, calculate its total and average.*/
#include<stdio.h>
float total(float a[5]);
float avg(float a[5]);
int main(){
	float a[5];
	printf("Enter the marks of 5 subjects: ");
	for(int i=0; i<5; i++){
		scanf("%f", &a[i]);
	}
	printf("Total = %0.2f\n", total(a));
	printf("Average = %0.2f\n", avg(a));
}
float total(float a[5]){
	float total = 0;
	for(int i=0; i<5; i++){
		total += a[i];
	}
	return total;
}
float avg(float a[5]){
	float avg = 0;
	for(int i=0; i<5; i++){
		avg += a[i];
	}
	return avg/5;
}
