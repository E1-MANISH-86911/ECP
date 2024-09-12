/*8. Write a program that will calculate the price for a quantity entered from the keyboard, given
that the unit price is Rs 5 and there is a discount of 10 percent for quantities over 30 and a 15
percent discount for quantities over 50.*/
#include<stdio.h>
int main(){
	int q;
	float d=0, p=0;
	printf("Enter the number of quantities: ");
	scanf("%d", &q);
	p = q * 5;
	if(q>50){
		printf("Price before disscount is %0.2f\n", p);
		p = p - (p * 0.15);
		printf("Price after disscount is %0.2f\n", p);
    }
	else if(q>30){
		printf("Price before disscount is %0.2f\n", p);
		p = p - (p * 0.10);
		printf("Price after disscount is %0.2f\n", p);
	}
	else{
		printf("Price before disscount is %0.2f\n", p);
        printf("Price after disscount is %0.2f\n", p);
	}

	return 0;
}
