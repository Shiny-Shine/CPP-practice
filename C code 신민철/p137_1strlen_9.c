//���ڿ��� ����(p137_1strlen_9)
//string length
#include<stdio.h>
int main(){
	int i=0;
	char n1[20], n2[20];
	
	printf("*** ���ڿ� �� ***\n\n");
	
	printf("���ڿ� 1 => ");
	gets(n1);
	
	printf("���ڿ� 2 => ");
	gets(n2);
	
	i=strcmp(n1,n2);
	
	if(i==0)	printf("�� ���ڿ��� �����մϴ�.");
	else if(i>0)	printf("\nù ���� ���ڿ��� �� Ů�ϴ�.\n");
	else	printf("\n �� ��° ���ڿ��� �� Ů�ϴ�.\n."); 
	
}
