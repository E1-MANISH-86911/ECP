/**Write a function to display given number in binary format.***/

#include<stdio.h>
#include<stdlib.h>
void binary(void *pnum,int size){
	for(int i=0;i<size;i++){
		int num=*((char *)pnum+i);
		unsigned char mask=0x80;
		while(mask){
			if(num&mask){
				printf("1");
				}
			else{
			printf("0");
			}
			mask=mask>>1;
		}
	}
}
	
int main(int argc,int *argv[]){
for(int i = 1; i < argc; i++) {	
	int num;
        sscanf(argv[i], "%d", &num);
        printf("Binary representation of %d:\n", num);
        binary(&num, sizeof(int));
}
	return 0;}
