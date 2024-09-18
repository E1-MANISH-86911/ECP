/***binary equivalent for any data type****/
#include<stdio.h>

void bin(void *pnum,int size);

int main(){
int num;
scanf("%d",&num);
bin(&num,sizeof(char));
return 0;
}

void bin(void *pnum,int size){
   	//for(int i=0;i<size;i++){
	for(int i=size-1;i>=0;i--){
		int num=*((char *)pnum+i);
		unsigned int mask=0x80000000;
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

