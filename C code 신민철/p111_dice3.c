//�ֻ��� ���� -3(p111_dice3)
#include <stdio.h>
main() {
	int i, n;
	char yes;
	
	srand(time(NULL));
	do{
		system("cls");	//Ŭ���� ��ũ��
		system("color 2B");
		printf("����� ������ �մϱ�?(2~9) => ");
		n=getche()-'0'; putchar('\n');
		if(n<=1 || n>9) printf("�߸� �Է��ϼ½��ϴ�. \n\n");
		while(n<=1 || n>9);
		
		printf("\n===============================================");
			for(i=1; i<=n; i++) {
				printf("\n%d�� �ֻ����� ��������! (�����̽��� �Է�) : ", i);
				getch();	//�����̽��ٸ� ��ٸ�
				printf(" %d\n", 1+rand()%6); }
		printf("\n===============================================");
		
		printf("\n�ٽ� �Ͻ÷��� y �� �������� => ");
		yes=getche(); putchar('\n');
		
	}while(yes=='y' ||yes=='Y');
} 
