//���� �����(p184_write2.c)
#include<stdio.h>
int main(void)
{
	FILE *fp;
	char st[50];
	
	printf("���Ϸ� ������ ���ڿ��� �Է��ϼ���. => ");
	gets(st);
	fp = fopen("d:/temp/string.txt", "w");	//d:�� ���� �õ��� �վ���� "w"�� write 
	fputs(st, fp);							//fprintf �� ���� ���� 
	fclose(fp);
	printf("�ڷ����� ������ �Ϸ�Ǿ����ϴ�"); 
	return 0; 
} 
