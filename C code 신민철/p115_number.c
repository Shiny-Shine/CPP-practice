//�ݺ��κ� ����(p115_number)
#include <stdio.h>
main() {
	int num;
	system("color 1f");
	while(1) {	//���� �� 0�� �ƴ� ���� �� ��(TRUE) 
		printf("���ڸ� �Է��ϼ��� => ");
		scanf("%d", &num);
		if(num<0) break;
		if(num==0) continue;
		if(num%2 == 1)
			printf("Ȧ���Դϴ�.\n");
		else
			printf("¦���Դϴ�.\n"); 
	}
} 
