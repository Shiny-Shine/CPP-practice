//������(p135_pointer3)
#include<stdio.h>
main(){
	int i, j, a[3][2]={{11, 12}, {21, 22},{31, 32}};
	
	printf("=== �� ���� �ּ�(address) ��� ===\n");
	for(i=0; i<3; i++)
		printf("a+%d : %d\n", i, a[i]);
	
	printf("\n=== �� ������ �ּ� ===\n");
	for(i=0; i<3; i++){
		printf("- %d��-\n", i);
		for(j=0; j<2; j++)
			printf("a[%d][%d]�� �ּ� : %d\n", i, j, *(a+i)+j);
	}
	
	printf("=== �� ������ ���빰 ��� ===\n");
	for(i=0; i<3; i++){
		printf("- %d�� -\n", i);
		for(j=0; j<2; j++)
			printf("a[%d][%d]�� ���빰 : %d\n", i, j, *(*(a+i)+j));
	}
	
}
