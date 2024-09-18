/**structure member offset***/

#include<stdio.h>

typedef struct employee{
	int eid;
	char name[20];
	float salary;
}e_t;

int main(){
	//e_t *p;
	e_t e={1,"eds",1234};
 	e_t *p=&e;
//	e_t *p=100;

	printf("value of eid is %d\n",e.eid);
printf("value %d\n",p->eid);
printf("&e=%u\n",&e);
printf("p address %u\n",&p->eid);
	printf("&e.eid=%u\n",&e.eid);
	printf("&e.name=%u\n",e.name);
	printf("&e.salary=%u\n",&e.salary);

	printf("offset of eid=%u\n",((char *)&e.eid)-((char *)&e));
	
	printf("offset of name=%u\n",((char *)e.name)-((char *)&e));
	
	printf("offset of salary=%u\n",((char *)&e.salary)-((char *)&e));
	return 0;
}
