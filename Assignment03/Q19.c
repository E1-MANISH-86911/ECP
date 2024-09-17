/*19. Modify above program (18) to accept a range i.e. two numbers and print tables of numbers
within the range.
Input: 3 6
Output:
3   4  5  6
6   8 10 12
9  12 15 18
12 16 20 24
15 20 25 30
18 24 30 36
21 28 35 41
24 32 40 48
27 36 45 54
30 40 50 60*/

#include <stdio.h>
int main() {
    int a, b;
    printf("Input: ");
    scanf("%d %d", &a, &b);
	printf("Output: \n");
	for(int i=1; i<11; i++){
		for(int j=a; j<=b; j++){
			printf("%4d ", j*i);
		}
		printf("\n");
	}
    return 0;
}

