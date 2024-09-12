/*3. Write a program to accept Employee Id , Department No, Designation from user and display output with reference to following tables
Example:
If input given is
Employee Id: 101
Dept No: 30
Designation Code: M
Then output should be:
Employee with employee id 101 is working in "Sales" department as "Manager".
*/

#include<stdio.h>
int main(){
	int emp_id, dept_no; 
	char desig_code;
	printf("Employee Id: ");
	scanf("%d", &emp_id);
	printf("Dept No: ");
	scanf("%d", &dept_no);
	printf("Designation Code: ");
	scanf("%*c%c", &desig_code);
	switch(dept_no){
		case 10:{
			if(desig_code == 'M')
				printf("Employee with employee id %d is working in Marketing department as Manager.\n", emp_id);
			else if(desig_code == 'S')
				printf("Employee with employee id %d is working in Marketing department as Supervisor.\n", emp_id);
			else if(desig_code == 's')
				printf("Employee with employee id %d is working in Marketing department as Security Officer.\n", emp_id);
			else if(desig_code == 'C')
				printf("Employee with employee id %d is working in Marketing department as Clerk.\n", emp_id);   
			break;
		}
		case 20:{
			if(desig_code == 'M')
                printf("Employee with employee id %d is working in Management  department as Manager.\n", emp_id);
            else if(desig_code == 'S')
                printf("Employee with employee id %d is working in Management  department as Supervisor.\n", emp_id);
            else if(desig_code == 's')
                printf("Employee with employee id %d is working in Management department as Security Officer.\n", emp_id);
            else if(desig_code == 'C')
                printf("Employee with employee id %d is working in Management department as Clerk.\n", emp_id);   
            break;
		}
		case 30:{
			if(desig_code == 'M')
                  printf("Employee with employee id %d is working in Sales  department as Manager.\n", emp_id);
            else if(desig_code == 'S')
                  printf("Employee with employee id %d is working in Sales  department as Supervisor.\n", emp_id);
            else if(desig_code == 's')
                  printf("Employee with employee id %d is working in Sales department as Security Officer.\n", emp_id);
            else if(desig_code == 'C')
                  printf("Employee with employee id %d is working in Sales department as Clerk.\n", emp_id); 
			break;
		}
		case 40:{
			if(desig_code == 'M')
                    printf("Employee with employee id %d is working in Designing  department as Manager.\n", emp_id);
            else if(desig_code == 'S')
                    printf("Employee with employee id %d is working in Designing  department as Supervisor.\n", emp_id);
            else if(desig_code == 's')
                    printf("Employee with employee id %d is working in Designing department as Security Officer.\n", emp_id);
            else if(desig_code == 'C')
                    printf("Employee with employee id %d is working in Designing department as Clerk.\n", emp_id); 
            break;
		}
		default:
			printf("Invalid Department Number.\n");
	}
	return 0;
}
