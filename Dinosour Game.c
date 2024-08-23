#include <stdio.h>
#include <Windows.h>
#include <conio.h>
#include <stdbool.h>
#define Player_Y 12    //�ÿ��� �������� X, Y�� ������
#define Block_Bot_Y 20
#define Block_Bot_X 45

int Score;

void gotoxy(int x, int y) {	//gotoxy �Լ�. �ֿܼ��� Ŀ���� ���ϴ� ������ �̵����� �ش�.
	COORD pos;
	pos.X = 2 * x;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int KeyHit(void) {	//KetHit �Լ�. Ű �Է��� �ް� Ű���� ��ȯ�� �ش�.

	if (_kbhit() != 0) { //Keyboard Hit�� ����. ���ۿ� ���� ������ 1, ������ 0�� ��ȯ�� �ش�.
		return _getch();
	}
	return 0;
}

void Title(void) {	//Title �Լ�. ����� �ܼ� â ũ�⸦ ���� �� �ش�.
	system("mode con:cols=100 lines=25");
	system("title �����! By ����");
}

void DrawScore(void) {
	gotoxy(0, 0);
	printf("Score = %d", Score);
}

void Draw(int playY) {	//Draw�Լ�. �÷��̾ �׷��ְ� �ٸ��� �������� �������� ����� �ش�.
	gotoxy(0, playY);
	static bool Flag = true;
	printf("        $$$$$$$ \n");
	printf("       $$ $$$$$$\n");
	printf("       $$$$$$$$$\n");
	printf("$      $$$      \n");
	printf("$$     $$$$$$$  \n");
	printf("$$$   $$$$$     \n");
	printf(" $$  $$$$$$$$$$ \n");
	printf(" $$$$$$$$$$$    \n");
	printf("  $$$$$$$$$$    \n");
	printf("   $$$$$$$$$    \n");
	printf("    $$$$$$$     \n");

	if (Flag) {		//Flag == True �� ����
		printf("     $    $$$     \n");
		printf("     $$          \n");
		Flag = false;
	}
	else {
		printf("     $$$  $      \n");
		printf("            $$     \n");
		Flag = true;
	}
	DrawScore();
}

void DrawBlock(int blockX) {	//DrawBlock �Լ�. ��ֹ��� �׷� �ش�.
	gotoxy(blockX, Block_Bot_Y);
	printf("@@@@");
	gotoxy(blockX, Block_Bot_Y + 1);
	printf(" @@ ");
	gotoxy(blockX, Block_Bot_Y + 2);
	printf(" @@ ");
	gotoxy(blockX, Block_Bot_Y + 3);
	printf(" @@ ");
	gotoxy(blockX, Block_Bot_Y + 4);
	printf(" @@ ");
	DrawScore();
}

void Gstart(void) {
	COORD Coor = { 0,1 };
	DWORD dw;
	bool Jumping = false, Bottom = false;
	const int gravity = 2;	//�߷�!
	const int ceiling = 3;

	int playY = Player_Y, blockX = Block_Bot_X;

	while (1) {	//�ٷ� ���� ����!
		DrawScore();

		if (KeyHit() == 'z' && Bottom) {	//Bottom == true �� ���� ��, Ű�� ���Ȱ� ���� ���� ��.
			Jumping = true;
			Bottom = false;
		}

		if (Jumping)
			playY -= gravity;	//�������̸� Y����, �ƴϸ� ����
		else
			playY += gravity;

		if (playY >= Player_Y) {	//�ٴڱ��� ������ üũ
			playY = Player_Y;
			Bottom = true;
		}

		if (playY <= ceiling)
			Jumping = false;	//���� �� üũ

		blockX -= 3;			//��ֹ��� �̵��ϸ鼭, ȭ���� ����� �ٽ� ��ġ�� �����.
		if (blockX <= -3)
			blockX = Block_Bot_X;

		if (blockX <= 6 && playY >= 8) {	//��� ����
			system("pause");
		}

		Score += 10;
		Draw(playY);
		DrawBlock(blockX);
		Sleep(200);
		FillConsoleOutputCharacter(GetStdHandle(STD_OUTPUT_HANDLE), ' ', 25 * 100, Coor, &dw);
		DrawScore();
	}
}

void Gover(void) {

}

int main(void) {
	Title();

	Gstart();

	system("pause");
	return 0;
}
