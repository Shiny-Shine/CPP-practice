//������ 139�� ��ȣ ó��(p139_code)
#include<stdio.h>
main(){
	
	char pw[22];
	int i;
	printf("��ȣ�� �Է��ϼ���: ");
	scanf("%s", pw);
	printf("���1 :");
	for(i=0; pw[i] != '\0'; i++)
		printf("%c", pw[i]+2);
	printf("\n��� 2: ");
	for(i=0; pw[i] != '\0'; i++)
		printf("%c", (pw[i] * 7)%80 + 48); 
} 
