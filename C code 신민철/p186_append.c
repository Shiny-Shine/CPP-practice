//���� ����� (p186_append.c)
#include<stdio.h>
int main(void){
	FILE *fp;
	char st[50];
	
	printf("���Ͽ� �߰��� ���ڿ��� �Է��ϼ��� => ");
	gets(st); 
	fp = fopen("d:/temp/out.txt", "a");
	fputs(st, fp);
	fclose(fp);
	printf("�ڷ����Ͽ� ���ڿ��� �߰��Ǿ����ϴ�.");
	
	return 0; 
} 
