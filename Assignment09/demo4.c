/***fputs(ch,fp);****/
#include<stdio.h>

int main(){
	char *str[4]={"desd","dmc","bda"};
	FILE *fp;
	fp=fopen("text1.txt","w+");
	
	for(int i=0;i<4;i++){
		fputs(str[i],fp);
	}
	


	fclose(fp);
	return 0;
}
