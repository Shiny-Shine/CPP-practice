//������ 40~100�� ������ �߻����� ������ ���� �ڷ������� �����Ͻÿ�(p187_file1_wr)
#include<stdio.h>
#define NO 20
#define SUB 5

int main(void)
{
	FILE *fp;
	int r, c, score[NO][SUB];		//2���� �迭�� ������ 2�� ���� ��� 
	
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
	printf("�ڷ����� ������ �Ϸ�Ǿ����ϴ�.");
} 
