//���ڿ��� ����(p137_1strlen_5.1)
//string length
#include<stdio.h>
int main(){
	int i=0, p=0;
	char pt[20], pt2[20], pt3[40];
	
	printf("*** ���ڿ��� ���� ***\n\n");
	
	printf("���� => ");
	gets(pt);
	
	while(pt[i] != NULL){
		pt3[i]=pt[i];
		i++;
		if(pt[i]=='\0')	break;
		
	}
	
	printf("�߰� => "); 
	gets(pt2);

	while(pt2[p] != NULL){
		pt3[i]=pt2[p];
		i++;
		p++;
		if(pt2[p]=='\0')	pt3[i]='\0';
		
	}
	printf("��ü => %s", pt3);
}
