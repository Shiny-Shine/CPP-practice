//p202_test3.c
#include<stdio.h>

int main(void){
	struct soft{
		short id;
		int score;
		char name[10];
	};
	
	struct soft class;		//구조체 선언 
	struct soft *ptn;		//구조에 포인터 선언 
	int no, i;
	FILE *fp;				//파일 포인터 선언 
	
	srand(time(NULL));
	printf("학생수는? => ");
	scanf("%d", &no); 
	
	ptn = malloc(sizeof(class)*no);			//메모리 확보 
	printf("\n *** 데이터 입력 ***\n");
	
	for(i=0; i<no; i++){
		(ptn+i)->id = 1100+i+1;				//학번 
		printf("%2d번 이름 => ", i+1);
		scanf("%s", (ptn+i)->name);			//이름 입력 
		(ptn+i)->score=40+rand()%61;		//점수 생성 
	}
	
	fp=fopen("software.csv", "w");
	for(i=0; i<no; i++)
		fprintf(fp, "%4d, %-9s, %3d\n", (ptn+i)->id, (ptn+i)->name, (ptn+i)->score);
	fclose(fp);
	free(ptn);
	printf("\n *** 파일 생성이 종료되었습니다 ***\n");
	
	return 0;
}
	
