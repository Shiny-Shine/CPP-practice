//���ڿ��� ����(p137_1strlen_4)
//string copy
#include<stdio.h>
int main(){
	char pt[20], pt2[20];
	
	printf("*** ���ڿ��� ���� ***\n\n");
	
	printf("���� => ");
	gets(pt);
	strcpy(pt2,pt);
	printf("�纻 => %s", pt2); 
}
