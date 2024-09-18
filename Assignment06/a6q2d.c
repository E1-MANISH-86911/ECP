/***int strcmp(const char *str1, const char *str2)***/

#include<stdio.h>

int strcmp(char *str1,char *str2);

int main(){
char str1[10]="hello";
//char str2[10]="hello";
char str2[10]="hii";
int res=strcmp(&str1,&str2);
if(res==0){
printf("equal");
}
else if(res>0){
printf("greater with ascii difference of %d",res);
}
else{
printf("lesser %d",res);
}
return 0;
}

int strcmp(char *str1,char *str2){
	for(int i=0;str1[i]!='\0';i++){
		for(int j=0;str2[j]!='\0';j++){
			if(str1[i]!=str2[j]){
				return str1[j]-str2[j];
			}
		}
		return str1[i]-str2[i];
	}
}
