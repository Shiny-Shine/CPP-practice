//�α���â �����(p106d_login) 
#include<stdio.h>
main(){
	char ch;
	
	printf("ID : "); //���̵� �Է�
	ch=getche();     //ù ���� �Է�
	while(ch !=13)   //EnterŰ�� ������ �Է� ����
		ch=getche(); //��° ���� ����
	putchar('\n');
	
	printf("PASSWARD : "); //��� �Է�
	ch=getch();
	putchar('*');
	while(ch !=13){			//ù���ڸ� *�� ��������� �ݺ��п��� �Ȱ��� *�� ��� 
		ch=getch();
		putchar('*');
	}	 
	 
}
