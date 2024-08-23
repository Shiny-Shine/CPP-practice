//제어 문자 (p67_control)
#include <stdio.h>
main() 
{
	printf("경고음 !!!\a");
	getch(); //키가 입력될 때까지 기다림
	printf("\nBack Space\b");
	getch();
	printf("\nCarriage Return\r");
	getch();
	printf("\n수평 Tab\t");
	getch();
	printf("\n수직 Tab\v");
	getch();
	printf("\nBack slash\\");
	getch();
	printf("\n큰 따옴표\""); 
} 

/*

	*/
