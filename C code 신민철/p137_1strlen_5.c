//���ڿ��� ����(p137_1strlen_5)
//string length
#include<stdio.h>
int main(){
	int i=0, p=0;
	char pt[20], pt2[20], pt3[40];
	
	printf("*** ���ڿ��� ���� ***\n\n");
	
	printf("���� => ");
	gets(pt);
	
	printf("�߰� => "); 
	gets(pt2);
	
	strcat(pt,pt2);
	printf("��ü => %s", pt);
}
