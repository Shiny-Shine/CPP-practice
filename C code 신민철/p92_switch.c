//switch~case�� (p92_switch.c)
#include <stdio.h>
main() {
	char ch;
	
	printf("�ֹ��� ��ǰ �ڵ� =>");
	//scanf("%c", &ch);
	ch=getch(); putchar('\n');
	printf("�ֹ��� ��ǰ�� ");
	switch(ch) {
		case 'a':printf("Audio�Դϴ�.\n");
				break;
		case 'b':printf("banana�Դϴ�.\n");	
				break;
			case 'c':printf("car�Դϴ�.\n");
				break;
			case 'd':printf("doll�Դϴ�.\n");	
				break;
			default:printf("�����ϴ�.\n");
	} 
} 
