//���ڿ��� ����(p137_1strlen_8)
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
	
	while(n1 != '\0'){
		if(n1[i] != n2[i]){
			printf("�� ���ڿ��� �������� �ʽ��ϴ�.");
			break; 
		}
		else if(n1[i] == n2[i]){
			printf("�� ���ڿ��� �����մϴ�.");
			break; 
		}
		i++;
	}
}
