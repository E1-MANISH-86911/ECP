#include<stdio.h>

int main(){
	int arr1[5]={1,2,3,4,5};
	int arr2[5];
	FILE *fp;
	fp=fopen("arr.txt","wb+");

	int noofrecords=fwrite(arr1,sizeof(int),5,fp);
	printf("%d is noofrecords are written into file",noofrecords);



	rewind(fp);
	//fseek(fp,0,SEEK_CUR);
	noofrecords=fread(arr2,sizeof(int),5,fp);

	printf("array2 is:");
	for(int i=0;i<5;i++){
	printf("%d",arr2[i]);
	}
	printf("\n");




	fclose(fp);
	return 0;
}
