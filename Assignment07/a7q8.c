/**Write a program to accept list of names as command line arguments and display the names.**/
/**Modify above program to display names in sorted order**/

#include<stdio.h>
#include<string.h>

int main(int argc,char *argv[]){
	if(argc==1){
	printf("enter the names\n");
	}
	for(int i=1;i<argc;i++){
	for(int j=i+1;j<argc;j++){
		if(strcmp(argv[i],argv[j])>0){
			char* temp=argv[i];
			argv[i]=argv[j];
			argv[j]=temp;
			}
		}
	}

	for(int i=0;i<argc;i++){
		printf("%s\n",argv[i]);
		
	}
	printf("%d",argc);
}
