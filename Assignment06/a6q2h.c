/***char* strstr(const char *str, const char *substr);*****/

#include<stdio.h>
#include<string.h>
char* strstr(const char *str, const char *substr);

int main(){
char str[20]="manish hello mama";
char substring[10]="hello";
char *p=strstr(str,substring);
printf("&str=%u",(void *)str);
printf("p=%u",(void *)p);
printf("index=%d",p-str);
return 0;
}

char* strstr(const char *str, const char *substr){
	for(int i=0;str[i]!='\0';i++){
			if(str[i]==substr[0]){
				if(!(strncmp(str+i,substr,strlen(substr))))
				return (char *)str+i;
			}}
			return NULL;
	
}
