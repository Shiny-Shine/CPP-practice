#include <stdio.h>
#include <Windows.h>
#include <conio.h>
#include <stdbool.h>
#define Player_Y 12    //궁예와 마구니의 X, Y축 사이즈
#define Block_Bot_Y 20
#define Block_Bot_X 45

int Score;

void gotoxy(int x, int y) {	//gotoxy 함수. 콘솔에서 커서를 원하는 곳으로 이동시켜 준다.
	COORD pos;
	pos.X = 2 * x;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int KeyHit(void) {	//KetHit 함수. 키 입력을 받고 키값을 반환해 준다.

	if (_kbhit() != 0) { //Keyboard Hit의 약자. 버퍼에 값이 있으면 1, 없으면 0을 반환해 준다.
		return _getch();
	}
	return 0;
}

void Title(void) {	//Title 함수. 제목과 콘솔 창 크기를 지정 해 준다.
	system("mode con:cols=100 lines=25");
	system("title 사딸라! By 샤인");
}

void DrawScore(void) {
	gotoxy(0, 0);
	printf("Score = %d", Score);
}

void Draw(int playY) {	//Draw함수. 플레이어를 그려주고 다리의 유동적인 움직임을 만들어 준다.
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

	if (Flag) {		//Flag == True 랑 같음
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

void DrawBlock(int blockX) {	//DrawBlock 함수. 장애물을 그려 준다.
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
	const int gravity = 2;	//중력!
	const int ceiling = 3;

	int playY = Player_Y, blockX = Block_Bot_X;

	while (1) {	//바로 게임 시작!
		DrawScore();

		if (KeyHit() == 'z' && Bottom) {	//Bottom == true 랑 같은 뜻, 키가 눌렸고 땅에 있을 때.
			Jumping = true;
			Bottom = false;
		}

		if (Jumping)
			playY -= gravity;	//점프중이면 Y감소, 아니면 증가
		else
			playY += gravity;

		if (playY >= Player_Y) {	//바닥까지 닿으면 체크
			playY = Player_Y;
			Bottom = true;
		}

		if (playY <= ceiling)
			Jumping = false;	//점프 끝 체크

		blockX -= 3;			//장애물이 이동하면서, 화면을 벗어나면 다시 위치를 잡아줌.
		if (blockX <= -3)
			blockX = Block_Bot_X;

		if (blockX <= 6 && playY >= 8) {	//사망 판정
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
