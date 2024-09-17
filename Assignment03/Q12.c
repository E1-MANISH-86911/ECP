/*12. Write a program to accept integer values of base and index and calculate power of base to index.
Input: base: 2	index: 5
Output: 32
Input:	base: 8	index: 
Output: 512*/

#include<stdio.h>
int main(){
	int base, index, output=1;
	printf("Input:\n");
	printf("base: ");
	scanf("%d", &base);
	printf("index: ");
	scanf("%d", &index);
	for(int i=0; i<index; i++){
		output*=base;
	}
	printf("Output: %d\n", output);
	return 0;
}
