/*9. Write a program to convert temperature in Celsius to Fahrenheit and vice versa.*/
#include<stdio.h>
int main(){
	float temp, fah=0, cel=0;
	printf("Enter the temperature in celsius: ");
	scanf("%f", &temp);
	fah = temp*9/5 + 32;
	printf("Celsius to Fahrenheit = %0.2f\n", fah);
	cel = (fah-32) * 5/9;
	printf("Fahrenheit to Celsius = %0.2f\n", cel);
}
