//���ڿ��� ����(p137_1strlen_3)
//string length
#include<stdio.h>
int main(){
	int i=0;
	char pt[20], pt2[20];
	
	printf("*** ���ڿ��� ���� ***\n\n");
	
	printf("���� => ", pt);
	gets(pt);
	while(pt[i] != NULL)	{
		pt2[i]=pt[i];
		i++;
		if(pt[i]=='\0')	pt2[i]='\0';
	}
	printf("�纻 => %s", pt2); 
}
