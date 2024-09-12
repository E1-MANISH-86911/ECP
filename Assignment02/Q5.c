/*5. Write a program to find maximum of three numbers using
a. If – else
b. conditional operator.*/
#include<stdio.h>
int main(){
	int a, b, c;
	printf("a.If-else\n");
	printf("Enter three numbers: ");
	scanf("%d %d %d", &a, &b, &c);
	if(a>b && a>c){
		printf("%d is greater than %d and %d.\n", a, b, c);
	}
	else if(b>a && b>c){
		printf("%d is greater than %d and %d.\n", b, a, c);
	}
	else if(c>a && c>b){
		printf("%d is greater than %d and %d.\n", c, a, b);
	}
	else if(a==b && a==c && c==b){
		printf("%d is equals to %d and %d.\n", a, b, c);
	}
	printf("b. conditional operator\n");
	(a==b && a==c && b==c) ? printf("%d is equals to %d and %d.\n", a, b, c) : (a>b && a>c) ? printf("%d is greater than %d and %d.\n", a, b, c) : (b>a && b>c) ? printf("%d is greater than %d and %d.\n", b, a, c) : printf("%d is greater than %d and %d.\n", c, a, b);
	return 0;
}
