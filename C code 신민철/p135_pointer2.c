//������(p135_pointer2)
#include<stdio.h>
main(){
	int i, a[5]={11, 22, 33, 44, 55};
	
	
	printf("=== �ּ�(address) ��� ===\n");
	for(i=0; i<5; i++){
		printf("a[%d]�� �ּ� : %d\n", i, &a[i]);
		printf("a+%d�� �� : %d\n\n", i, a+i);
	}
	
	
	printf("=== ���빰 ��� ===\n");
	for(i=0; i<5; i++){
		printf("a[%d]�� ���빰 : %d\n", i, a[i]);
		pritnf("a+%d�� ���빰 : %d\n\n", i, *(a+i));
	}
}
