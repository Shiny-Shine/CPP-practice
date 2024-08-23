//구조체 배열의 활용 (p173_struct3.c)
//학번, 이름, 점수, 레코드 만들기

#include<stdio.h>
#define NO 5

int main(void){
	struct student{
		short id;
		char name[9];
		int score;
	};
	
	struct student class[NO];
	struct student *spt;
	int no, i;
	
	srand(time(NULL));
	printf(" *** 데이터 입력 ***\n");
	spt = class;
	for(i=0; i<NO; i++){
		(spt+i)->id = 1100+i+1;
		printf("%d번 이름 => ", i+1);
		scanf("%s", (spt+i)->name);
	
		(spt+i)->score = 40+rand()%61;
	}
	printf("\n *** 데이터 출력 ***\n");
	for(i=0; i<NO; i++)	printf("%4d %-9s %3d\n", (spt+i)->id, (spt+i)->name, (spt+i)->score);
	
	return 0;
} 
