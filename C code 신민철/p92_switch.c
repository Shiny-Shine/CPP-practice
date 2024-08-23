//switch~case문 (p92_switch.c)
#include <stdio.h>
main() {
	char ch;
	
	printf("주문한 상품 코드 =>");
	//scanf("%c", &ch);
	ch=getch(); putchar('\n');
	printf("주문한 상품은 ");
	switch(ch) {
		case 'a':printf("Audio입니다.\n");
				break;
		case 'b':printf("banana입니다.\n");	
				break;
			case 'c':printf("car입니다.\n");
				break;
			case 'd':printf("doll입니다.\n");	
				break;
			default:printf("없습니다.\n");
	} 
} 
