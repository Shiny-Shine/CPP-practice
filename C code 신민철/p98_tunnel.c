//p98_tunnel
#include<stdio.h>
#define HIGH 170 //170�� HIGH�� �̸� �����Ѵ� (���� �빮�ڷ�) 
main(){
	int a, b, c;
	printf("�ͳε��� ���̸� �Է��ϼ���");
	scanf("%d %d %d", &a, &b, &c);
	if (a<=HIGH)
		printf("�浹 %d", a);
	else if (b<=HIGH)
		printf("�浹 %d", b);
	else if (c<=HIGH)
		printf("�浹 %d", c);
	else
		printf("���� ���");
	//���� if�� 
}
