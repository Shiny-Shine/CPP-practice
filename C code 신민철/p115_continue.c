//�ݺ� �κ��� �Ϻ� ����(p115_continue)
#include <stdio.h>
int main() {
	int i, sum=0;
	
	for(i=1; i<=10; i++) {
		if(i%2 == 0) continue;	//i�� 2�� ���� ��������0(¦��)�̸� ����
		printf("%d ", i);
		sum=sum+1;
	}
	printf("\n1~10������ Ȧ���� �� : %d \n", sum);
} 
