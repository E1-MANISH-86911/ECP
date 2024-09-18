/***
Write a function to accept five names of students from the user. Write another function to print these names. Write a function to sort student names.***/
#include<stdio.h>
#include<string.h>

void accept(char arr[][100],int r);
void print(char arr[][100],int r);
void sorted(char arr[][100],int r);
int main(){
int r;
scanf("%d",&r);
char arr[r][100];
printf("enter names");
accept(arr,r);
printf("unsorted\n");
print(arr,r);
sorted(arr,r);
printf("sorted\n");
print(arr,r);

return 0;
}

void accept(char arr[][100],int r){
	for(int i=0;i<r;i++){
			scanf("%s",arr[i]);}
}

void print(char arr[][100],int r){
	for(int i=0;i<r;i++){
			printf("%s ",arr[i]);
		}
		printf("\n");
	}

void sorted(char arr[][100],int r){
	char temp[100];
	for(int i=0;i<r-1;i++){
		for(int j=i+1;j<r;j++){
			if(strcmp(arr[i],arr[j])>0){
				strcpy(temp,arr[i]);
				strcpy(arr[i],arr[j]);
				strcpy(arr[j],temp);
			}
		}
	}

}
