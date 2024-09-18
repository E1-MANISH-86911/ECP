/***2. Write a function to read a file character by character and copy the contents to another file.
Source file pointer and Destination file pointers should be arguments to the function. Use the
function to copy the file to destination file, display contents of the file, accept data from user
and write to destination file.***/
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
