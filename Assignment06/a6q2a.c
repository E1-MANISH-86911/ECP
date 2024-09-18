/**ize_t strlen(const char* str);*****/
#include<stdio.h>
int strlen(char *str);

int main(){
	char str[20]="pg desd";
	printf("%d is length",strlen(str));
	return 0;
}


int strlen(char *str){
	int len=0;
	for(int i=0;str[i]!='\0';i++){
		len++;
	}
	return len;
}
