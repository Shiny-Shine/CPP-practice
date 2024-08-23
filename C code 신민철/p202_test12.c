//구조체 배열, 파일 입출력 평가 (p202_test12.c) 
#include<stdio.h>
#define NO 5

int main(void){
	struct soft{
		int no, kor, eng, mat, tot;
		float avg;
		char name[10];
	};
	
	struct soft class[NO];
	struct soft *ptn;
	FILE *fp;
	int i, no;
	
	srand(time(NULL));
	printf("학생수는? => ");
	scanf("%d", &no); 
	
	printf(" *** 데이터 입력 ***\n");
	
	
	for(i=0; i<NO; i++){
		class[i].no = 1100+i+1;
		printf("%2d 번 이름 => ", i+1);
		gets(class[i].name);
		class[i].kor = 40+rand()%61;
		class[i].eng = 40+rand()%61;
		class[i].mat = 40+rand()%61;
		class[i].tot = class[i].kor + class[i].eng + class[i].mat;
		class[i].avg = (float)class[i].tot / 3.0;
	}
	
	fp = fopen("sw_dep.csv", "w");
	for(i=0; i<NO; i++){
		fprintf(fp, "%5d, %s, %3d, %3d, %3d, %4d, %.2f\n", class[i].no, class[i].name, class[i].kor, class[i].eng, class[i].mat, class[i].tot, class[i].avg);
	}
	close(fp);
	
	printf("출력 완료됨.\n");
	
}
