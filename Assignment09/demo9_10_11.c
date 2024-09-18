#include<stdio.h>

int main(){
	
	FILE *fp;
	fp=fopen("file4.txt","w+");
	char ch;
	for(int i='A';i<='Z';i++)
		fputc(i,fp);
//	fclose(fp);
//rewind(fp);
//fseek(fp,-10,SEEK_END);
fseek(fp,5,SEEK_CUR);
//fseek(fp,10,SEEK_SET);
//	fp=fopen("file4.txt","r");
	printf("file contents:");
	while((ch=fgetc(fp))!=EOF){
	printf("%c",ch);
	}
	printf("\n");

	fclose(fp);
	return 0;
}
