//���� ����(p97_destiny) 
#include<stdio.h>
main() {
	int year, month, day, res;
	printf("����� ���ָ� ���帳�ϴ�.\n����, ��, ���� ���ʴ�� �Է��ϼ��� : ");
	scanf("%d %d %d", &year, &month, &day, &res);
	res=(year-month+day)%10; //res�� 10���� ���� 1�� �ڸ� ���ڸ� �����. 
	if(res==0)
		printf("����� ���ִ� ����Դϴ�");
	else
		printf("����� ���ִ� �׷������Դϴ�\n"); 
		//x%n = 0~(n-1) x�� n���� ������ 0~(n-1)�� ���� ���´� EX) x%2 = 0,1(¦�� ���ϱ�) 
} 


