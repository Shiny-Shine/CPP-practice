#include<stdio.h>
#include<Windows.h>
//typedef 구조체 사용! 
typedef enum { NOCURSOR, SOLIDCURSOR, NORMALCURSOR , HALFCURSOR} CURSOR_TYPE;
void setcursortype(CURSOR_TYPE c)
{
	CONSOLE_CURSOR_INFO CurInfo;
	switch(c)
	{
		case NOCURSOR:
			CurInfo.dwSize = 1;
			CurInfo.bVisible = FALSE;
			break;
		case SOLIDCURSOR:
			CurInfo.dwSize = 100;
			CurInfo.bVisible = TRUE;
			break;
		case NORMALCURSOR:
			CurInfo.dwSize = 20;
			CurInfo.bVisible = TRUE;
			break;
		case HALFCURSOR:
			CurInfo.dwSize = 50;
			CurInfo.bVisible = TRUE;
	}
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&CurInfo);
}

int main(void)
{
	setcursortype(HALFCURSOR);
	return 0;
}
