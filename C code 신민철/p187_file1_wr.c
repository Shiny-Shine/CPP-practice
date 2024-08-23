//범위가 40~100인 난수를 발생시켜 다음과 같은 자료파일을 생성하시오(p187_file1_wr)
#include<stdio.h>
#define NO 20
#define SUB 5

int main(void)
{
	FILE *fp;
	int r, c, score[NO][SUB];		//2차원 배열을 무조건 2중 포문 사용 
	
	srand(time(NULL));
	
	for(r=0; r<NO; r++)
		for(c=0; c<SUB; c++)	score[r][c] = 40+rand()%61;
	
	fp = fopen("score.dat", "w");
	
	for(r=0; r<NO; r++){
		for(c=0; c<SUB; c++){
			fprintf(fp, "	%3d", score[r][c]);
		}
		fprintf(fp, "\n");
	}
	
	close(fp);
	printf("자료파일 생성이 완료되었습니다.");
} 
