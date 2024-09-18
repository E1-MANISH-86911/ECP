#include<stdio.h>
#include<stdlib.h>
int main(){
	char ch;
	int o1,o2,res;
	
	fprintf(stdout,"enter ch");
	fscanf(stdin,"%c",&ch);

	fprintf(stdout,"enter 01,o2");
	fscanf(stdin,"%d%d",&o1,&o2);
	switch(ch){
	case '+':
	res=o1+o2;
	break;
	case '-':
	res=o1-o2;
	break;
	case '*':
	res=o1*o2;
	break;
	case '/':
	if(o2==0){
	fprintf(stderr,"divide by zero error");
	goto END;
//exit(-1);
//return -1;
break;
	}
	else{
	res=o1/o2;}
	break;
	}
	fprintf(stdout,"%d %c %d = %d",o1,ch,o2,res);
	END: return 0;
}
