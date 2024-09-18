/**Write a structure to store school student information. Note that assuming the records are
maintained till 12th standard student, standard field do not occupy more than 4 bits. Also
student gender can be stored as a single bit. Consider age to be maximum 32 years. Accept the
information of 3 students from the user and display it again.****/
#include<string.h>
#include<stdio.h>
typedef struct student {
    unsigned int standard : 4;  // 4 bits to store standard (0-12)
    unsigned int age : 5;       // 5 bits to store age (0-32)
    unsigned int gender : 1;    // 1 bit to store gender (0 for male, 1 for female)
    int rollno;
    char name[20];
} s_t;

void accept();
void print();

s_t s[3];
int main(){
accept();
print();
return 0;
}

void accept(){
    int temp_standard, temp_age, temp_gender, temp_rollno;
    char temp_name[20];
    for(int i=0;i<3;i++){
        printf("Enter age: \n");
        scanf("%d",&temp_age);
        if(temp_age<=32){
            s[i].age = temp_age;
            printf("Enter standard, gender (0/1), rollno, name: ");
            scanf("%d%d%d%s",&temp_standard,&temp_gender,&temp_rollno,temp_name);
            s[i].standard = temp_standard;
            s[i].gender = temp_gender;
            s[i].rollno = temp_rollno;
            strcpy(s[i].name, temp_name);
        }
        else{
            printf("Invalid age. Please enter age less than or equal to 32.");
            i--;
        }
    }
}

void print(){
	
	for(int i=0;i<3;i++){
	printf("standard= %d,age= %d,gender=%s,rollno=%d,name=%s\n",s[i].standard,s[i].age,s[i].gender ? "Female" : "Male",s[i].rollno,s[i].name);
	}
	}

