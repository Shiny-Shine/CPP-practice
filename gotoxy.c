#include<stdio.h>
#include<Windows.h>

void gotoxy(int x, int y)
{
	COORD CursorPosition = {x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), CursorPosition);
}

int main(void)
{
	gotoxy(0, 0);
	printf("(0, 0) ��ǥ�� ����߽��ϴ�.");
	gotoxy(10, 10);
	printf("(10, 10) ��ǥ�� ����߽��ϴ�.");
	gotoxy(40, 12);
	printf("(40, 12) ��ǥ�� ����߽��ϴ�.");
	gotoxy(0, 24);
	printf("���� ���ٿ� ����߽��ϴ�.");
	
}
