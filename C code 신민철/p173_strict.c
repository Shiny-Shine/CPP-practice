//구조체 배열(p173_strict.c)
#include<stdio.h>
#include<string.h>

int main(void)
{
	struct student
	{
		int id;
		char name[10];
		float score;
	}clas[30];
	
	clas[0].id = 1101;
	strcpy(clas[0].name,"Lee");
	clas[0].score = 95.3;
	clas[1].id = 1102;
	strcpy(clas[1].name,"Kim");
	clas[1].score = 91.8;
	
	printf("%d	%-5s	%.1f\n", clas[0].id, clas[0].name, clas[0].score);
	printf("%d	%-5s	%.1f\n", clas[1].id, clas[1].name, clas[1].score);
	
	return 0;
} 
