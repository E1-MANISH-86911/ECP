/***6. Write a function to swap two numbers using XOR operation.****/

#include<stdio.h>

void swap(int *p1,int *p2);

int main(){
	int n1,n2;
	scanf("%d%d",&n1,&n2);
	swap(&n1,&n2);
	return 0;
	}

void swap(int *p1,int *p2){
	*p1=(*p1)^(*p2);
	*p2=(*p1)^(*p2);
	*p1=(*p1)^(*p2);
	printf("swapped numbers are %d and %d",*p1,*p2);
	}
