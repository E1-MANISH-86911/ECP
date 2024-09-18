/***fgets(str,sizeof(str),fp);***/

#include<stdio.h>

int main(){
	
	FILE *fp;
	fp=fopen("text1.txt","w+");

	char *arr[4]={"hii","hello","how","who"};

	for(int i=0;i<4;i++){
		fputs(arr[i],fp);
	}
	
	fclose(fp);

	char str[4];
	while(fgets(str,sizeof(str),fp)!=NULL){
		printf("%s\n",str);
	}

	fclose(fp);
	return 0;
}
