//���ڿ��� ����(p137_1strlen_6)
//string length
#include<stdio.h>
int main(){
	int i, num=0;
	char st[20];
	
	printf("*** ���ڿ��� ��ȯ ***\n\n");
	
	printf("������ ���ڿ� => ");
	gets(st);
	
	for(i=0; st[i]>='0' && st[i]<='9'; i++)
		num=num*10+(st[i]-'0');
	
	printf("�� �� => %d", num);
}
