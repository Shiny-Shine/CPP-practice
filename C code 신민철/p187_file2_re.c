//범위가 40~100인 난수를 발생시켜 다음과 같은 자료파일을 생성하시오(p187_file2_re)
#include<stdio.h>
#define NO 20
#define SUB 5

int main(void)
{
	FILE *fp;
	int r, c, score[NO][SUB];		//2차원 배열을 무조건 2중 포문 사용 
	
	srand(time(NULL));
	
	fp = fopen("score.dat", "r");
	
	for(r=0; r<NO; r++)
		for(c=0; c<SUB; c++)
			fscanf(fp, "%d", &score[r][c]);
	close(fp);
	
	for(r=0; r<NO; r++){
		for(c=0; c<SUB; c++){
			printf("%4d", score[r][c]);
		}
		printf("\n");
	}
	
	return 0;
	
} 
