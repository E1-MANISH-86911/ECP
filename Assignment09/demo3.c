#include<stdio.h>

int main(int argc,char *argv[]){
	FILE *fs;
	fs=fopen(argv[1],"r");
	FILE *fd;
	fd=fopen(argv[2],"w");
    char ch;
	while((ch=fgetc(fs))!=EOF){
		fputc(ch,fd);}

	fclose(fd);
	fclose(fs);
	return 0;
}
