//���ڿ��� ����(p137_1strlen_2)
//string length
#include<stdio.h>
int main(){
	int i=0;
	char pt[20];
	
	printf("*** ���ڿ��� ���� ***\n\n");
		printf("���ڿ� => ");
	gets(pt);
	while(pt[i] != NULL)	i++;
	printf("���ڿ��� ���� => %d ����", i); 
}
