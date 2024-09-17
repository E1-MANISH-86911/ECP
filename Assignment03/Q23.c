// 23. Print Pascal Triangle

#include<stdio.h>
int main(){
	int c=1;
	for(int i=0; i<5; i++){
		for(int k=1; k<=5-i; k++){
			printf(" ");
		}
		for(int j=0; j<=i; j++){
			if(j==0 || i==0){
				c=1;
			}
			else{
				c=c*(i-j+1)/j;
			}
			printf("%d ", c);
		}
		printf("\n");
	}
	return 0;
}
