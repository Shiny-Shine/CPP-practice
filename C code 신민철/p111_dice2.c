//�ֻ��� ���� -1(p111_dice2)
#include <stdio.h>
main() {
	int i, n;
	
	srand(time(NULL));
	printf("�� ���� ������ �մϱ�?(2~9) => ");
	n = getche()-'0';
	printf("\n===================================================");
	for(i=1; i<=n; i++) {
		printf("\n%d�� �ֻ����� ��������! (�����̽��� �Է�) : ", i);
		getch();	//�����̽��ٸ� ��ٸ�
		printf(" %d\n", 1+rand()%6); 
	}
} 
