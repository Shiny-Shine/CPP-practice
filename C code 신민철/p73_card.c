//�ڷ� �����(p73_card)
#include<stdio.h>
main() {
	char name[21];
	int age;
	char code;
	double secure;
	
	printf("�̸��� �Է��ϼ��� : ");
	scanf("%s", name);
	printf("���̸� �Է��ϼ��� : "); 
	scanf("%d", &age);
	fflush(stdin);
	printf("�μ� �ڵ带 �Է��ϼ��� : ");
	scanf("%s", &code);
	printf("����Ű�� �Է��ϼ��� : "); 
	scanf("%d", &secure);
	
	printf("***************************\n");
	printf("�̸� : %s\n", name);
	printf("���� : %d\n", age);
	printf("�μ��ڵ� : %c\n", code);
	printf("����Ű : %d\n");
	printf("*************************\n");
	 
} 
