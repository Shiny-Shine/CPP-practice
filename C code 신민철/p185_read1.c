//���� ����� (p185_read1.c)
#include<stdio.h>
int main(void){
	FILE *fp;
	char st[50];
	
	printf("���Ϸκ��� ���� ���ڿ� => ");
	fp = fopen("out.txt", "r");
	fscanf(fp, "%s", st);
	fclose(fp);
	puts(st);
} 
