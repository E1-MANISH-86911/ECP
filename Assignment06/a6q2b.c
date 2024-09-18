/**char* strcpy(char *dest, const char *src);***/

#include<stdio.h>

char* strcpy(char *dest,char *src);

int main(){
	char dest[20]="hello";
	char src[20]="heyy";
	printf("%s is dest\n",dest);
	strcpy(dest,src);
	printf("%s is final",dest);
return 0;
}

char* strcpy(char *dest,char *src){
	int i=0;
	for(;src[i]!='\0';i++){
		dest[i]=src[i];
		}
		dest[i]='\0';
		return dest;	

}
