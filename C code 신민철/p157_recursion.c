//��Ÿ ��� 2(p157_recursion)
#include<stdio.h>
char star[20];
int f(int n){
	if(n>0){
		f(n-1);
		star[n] = '$';
		printf("%s\n", star+1);	//���������� 0���� NULL��. +1�� ������������ NULL�� ��µ� �ƹ��͵� �ȳ��� 
	}
}

int main(void){
	int n;
	
	printf("����� ������ ������? => ");
	scanf("%d", &n);
	f(n);
	switch(n){
		case 1: printf("�ϵ���� �� �� �� ��!");
		case 2: printf("��  �� ��! It's double! DOUBLE!!'");  
		return 0;
	}
	   
}
