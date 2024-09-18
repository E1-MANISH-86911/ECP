/***char* strcat(char *dest, const char *src);***/

#include<stdio.h>

int strcat(char *dest,const char *src);

int main(){
	char dest[20]="manish bagunava?";
	char src[20]="hiii hello!";
	strcat(dest,src);
	printf("%s",dest);
return 0;
}

int strcat(char *dest,const char *src){
	int j=0;
	while(dest[j]!='\0'){
		j++;}
	for(int i=0;src[i]!='\0';i++){
		dest[j++]+=src[i];
	}
	dest[j]='\0';
	
	return *dest;
}
