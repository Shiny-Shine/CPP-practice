//������ 40~100�� ������ �߻����� ������ ���� �ڷ������� �����Ͻÿ�(p187_file2_re)
#include<stdio.h>
#define NO 20
#define SUB 5

int main(void)
{
	FILE *fp;
	int r, c, score[NO][SUB];		//2���� �迭�� ������ 2�� ���� ��� 
	
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
