//���ڿ��� �������� ����(p135_pointer4)
#include<stdio.h>
main(){
	int i, j;
	char sa[5][10]={"usb","mouse", "printer", "computer", "percessor"};
	char *sp[5]={"usb", "mouse", "printer", "computer", "processor"};
	
	//���ڿ� ��ü�� ������ ����� ������ ������
	
	printf("=== �Ϲ� �迭 ===\n");
	for(i=0; i<5; i++)
		printf("sa[%d] : %d, %s\n", i, sa[i], sa[i]);
		// %s�� ��� ����� ������
		
	printf("\n===== ������ �迭 =====\n");
	for(i=0; i<5; i++)
		printf("sp+%d : %d, %s\n", i, sp[i], sp[i]);
}
