//���ڿ��� ����(p137_1strlen)
//string length
#include<stdio.h>
int main(){
	int i=0;
	char pt[20];
	
	printf("*** ���ڿ��� ���� ***\n\n");
		printf("���ڿ� => ");
	gets(pt);
	i=strlen(pt);		//string length
	printf("���ڿ��� ���� => %d ����", i); 
}
