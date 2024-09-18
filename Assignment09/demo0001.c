#include<stdio.h>

typedef struct employee{
	int eid;
	char name[20];
	char address[20];
	double salary;
}e_t;

e_t e1;
void accept_emp(e_t *emp);
void print_emp(e_t *emp);

void add_emp(e_t *emp);
void prints_emp(e_t *emp);
void search_emp(int eid);
void edit_emp(int eid,double salary);
void delete_emp(int id);

int main(){
	int ch;
//	e_t e1;
	do{
		printf("enter0:exit and  1-add,2-prints,3-search,4-edit,5-delete according to above  function declarations \n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				accept_emp(&e1);
				add_emp(&e1);
				break;
			case 2:
				prints_emp(&e1);
				break;
			case 3:
				search_emp(3);
				break;
			case 4:
				edit_emp(3,90000);
				break;
			case 5:
				delete_emp(3);
				break;
			}
		}while(ch!=0);


return 0;
}


void accept_emp(e_t *emp){
	printf("enter employee data:");
	scanf("%d %s %s %lf",&emp->eid,emp->name,emp->address,&emp->salary);

}

void print_emp(e_t *emp){
	printf("%d %s %s %lf\n",emp->eid,emp->name,emp->address,emp->salary);
}

void add_emp(e_t *emp){
	FILE *fp=fopen("emp.txt","ab");
	fwrite(emp,sizeof(e_t),1,fp);
	fclose(fp);
}

void prints_emp(e_t *emp){
	FILE *fp=fopen("emp.txt","rb");
	while(fread(emp,sizeof(e_t),1,fp)>0){
		print_emp(&e1);
	}
	fclose(fp);
}

void search_emp(int eid){
	e_t emp;
	FILE *fp=fopen("emp.txt","rb");
	while(fread(&emp,sizeof(e_t),1,fp)!=0){
		if(eid==emp.eid){
			print_emp(&e1);
			break;
		}
	}
	fclose(fp);
}

void edit_emp(int eid,double sal){
	e_t emp;
	FILE *fp=fopen("emp.txt","rb+");
	while(fread(&emp,sizeof(e_t),1,fp)!=0){
		if(eid==emp.eid){
			fseek(fp,-sizeof(e_t),SEEK_CUR);
			emp.salary=sal;
			fwrite(&emp,sizeof(e_t),1,fp);
			break;
		}
	}
	fclose(fp);
}

void delete_emp(int eid){
	e_t emp;
	FILE *fp=fopen("emp.txt","rb");
	FILE *tp=fopen("emp.txt","wb");
	while(fread(&emp,sizeof(e_t),1,fp)>0){
		if(eid!=emp.eid){
			fwrite(&emp,sizeof(e_t),1,tp);
			break;
		}
	}
	fclose(fp);
	fclose(tp);
	rename("temp.txt","emp.txt");
}


