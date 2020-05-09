/*
	2020-04-02 ~ ??? C++ Othello
	2020-04-02 현재 check 제외 전부 구현
	2020-04-08 로직 전부 수정
	2020-04-10 완성
*/

#include <iostream>
#include <cstdlib>
int LEN;
using namespace std;

struct Logic
{

	int** dat = nullptr;		// 2차원 배열을 만들어서 주소를 기억시킬 포인터 변수
	int size = LEN;	// 오목판의 사이즈
	int turn = 0;	// 백돌, 흑돌 차례를 나타냄
	int black, white, game;	//돌 개수

	void makeData(int);
	void deleteData();
	void checkStone(void);
	bool putStone(int, int);
	int checkAndReverse(int, int);
	void add(int, int&, int&);
};

void Logic::checkStone()
{
	black = 0, white = 0;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (dat[i][j] == 1)	black++;
			else if (dat[i][j] == 2)	white++;
		}
	}
}

void Logic::makeData(int g)
{
	// 2차원 배열을 메모리 공간을 동적 할당한다.
	dat = (int**)malloc(sizeof(int) * size);
	dat[0] = (int*)malloc(sizeof(int) * size * size);
	for (int i = 1; i < size; i++)	dat[i] = dat[i - 1] + size;	//포인터연산

	// 모든 공간의 값을 0으로 초기화
	memset(dat[0], 0, sizeof(int) * size * size);

	game = g;

	// 오델로라면 시작 돌 놓기
	if (g == 2)
	{
		dat[3][3] = 2;
		dat[4][4] = 2;
		dat[3][4] = 1;
		dat[4][3] = 1;
	}
}

void Logic::deleteData()
{
	free(dat[0]);	// 동적할당된 1차 주소값들 해제
	free(dat);		// 동적할당된 2차 주소값 해제
}

bool Logic::putStone(int r, int c)
{
	if (dat[r][c] > 0)	return false;	//이미 데이터가 있는 상태면 취소
	if (white + black == 64 && game == 2)	return true;

	int a;
	a = checkAndReverse(r, c);
	if (a == 2)	return false;

	dat[r][c] = turn + 1;	// 배열값을 1또는 2로 수정
	if (a == 1)	return true;			// 돌을 놓을 수 있는지 체크

	turn = 1 - turn;		// 턴 변경
	return false;
	// 이 함수의 반환값이 true 면 게임을 종료시킨다
}

int Logic::checkAndReverse(int r, int c)			// (pr, pc) : 좌표 지점
{
	int pr, pc, flag = 0, cnt = 0, current = turn + 1, flag2 = 0;

	if (game == 2)	current = 1 + (1 - turn);

	// 상
	for (pr = r - 1; pr >= 0; add(0, pr, c))
	{
		if (game == 2 && dat[pr][c] != current && dat[pr][c] != 0) { flag++; break; }
		if (dat[pr][c] != current)	break;
		cnt++;
	}
	if (game == 2 && flag == 1 && cnt != 0)
	{
		for (int i = r; i > pr; i--)
			dat[i][c] = turn + 1;
		flag2++;
	}
	if (cnt == 4 && game == 1)	return 1;

	// 하
	flag = 0;
	for (pr = r + 1; pr < size; add(1, pr, c))
	{
		if (game == 2 && dat[pr][c] != current && dat[pr][c] != 0) { flag++; break; }
		if (dat[pr][c] != current)	break;
		cnt++;
	}
	if (game == 2 && flag == 1 && cnt != 0)
	{
		for (int i = r; i < pr; i++)
			dat[i][c] = turn + 1;
		flag2++;
	}
	if (cnt == 4 && game == 1)	return 1;

	// 좌
	flag = 0;
	for (pc = c - 1; pc >= 0; add(2, r, pc))
	{
		if (game == 2 && dat[r][pc] != current && dat[r][pc] != 0) { flag++; break; }
		if (dat[r][pc] != current)	break;
		cnt++;
	}
	if (game == 2 && flag == 1 && cnt != 0)
	{
		for (int i = c; i > pc; i--)
			dat[r][i] = turn + 1;
		flag2++;
	}
	if (cnt == 4 && game == 1)	return 1;

	// 우
	flag = 0;
	for (pc = c + 1; pc < size; add(3, r, pc))
	{
		if (game == 2 && dat[r][pc] != current && dat[r][pc] != 0) { flag++; break; }
		if (dat[r][pc] != current)	break;
		cnt++;
	}
	if (game == 2 && flag == 1 && cnt != 0)
	{
		for (int i = c; i < pc; i++)
			dat[r][i] = turn + 1;
		flag2++;
	}
	if (cnt == 4 && game == 1)	return 1;

	// 우상
	flag = 0;
	for (pc = c + 1, pr = r - 1; pc < size && pr >= 0; add(5, pr, pc))
	{
		if (game == 2 && dat[pr][pc] != current && dat[pr][pc] != 0) { flag++; break; }
		if (dat[pr][pc] != current)	break;
		cnt++;
	}
	if (game == 2 && flag == 1 && cnt != 0)
	{
		for (int i = r, j = c; i > pr && j < pc; add(5, i, j))
			dat[i][j] = turn + 1;
		flag2++;
	}
	if (cnt == 4 && game == 1)	return 1;

	// 우하
	flag = 0;
	for (pc = c + 1, pr = r + 1; pc < size && pr < size; add(4, pr, pc))
	{
		if (game == 2 && dat[pr][pc] != current && dat[pr][pc] != 0) { flag++; break; }
		if (dat[pr][pc] != current)	break;
		cnt++;
	}
	if (game == 2 && flag == 1 && cnt != 0)
	{
		for (int i = r, j = c; i < pr && j < pc; add(4, i, j))
			dat[i][j] = turn + 1;
		flag2++;
	}
	if (cnt == 4 && game == 1)	return 1;

	// 좌상
	flag = 0;
	for (pc = c - 1, pr = r - 1; pc >= 0 && pr >= 0; add(6, pr, pc))
	{
		if (game == 2 && dat[pr][pc] != current && dat[pr][pc] != 0) { flag++; break; }
		if (dat[pr][pc] != current)	break;
		cnt++;
	}
	if (game == 2 && flag == 1 && cnt != 0)
	{
		for (int i = r, j = c; i > pr && j > pc; add(6, i, j))
			dat[i][j] = turn + 1;
		flag2++;
	}
	if (cnt == 4 && game == 1)	return 1;

	// 좌하
	flag = 0;
	for (pc = c - 1, pr = r + 1; pc >= 0 && pr < size; add(7, pr, pc))
	{
		if (game == 2 && dat[pr][pc] != current && dat[pr][pc] != 0) { flag++; break; }
		if (dat[pr][pc] != current)	break;
		cnt++;
	}
	if (game == 2 && flag == 1 && cnt != 0)
	{
		for (int i = r, j = c; i < pr && j > pc; add(7, i, j))
			dat[i][j] = turn + 1;
		flag2++;
	}
	if (cnt == 4 && game == 1)	return 1;

	if (flag2 == 0 && game == 2)	return 2;
	return 0;
}

void Logic::add(int type, int& r, int& c)	// 참조매개인자(&)는 함수 외부의 변수값을 변경하겠다는 의미
{
	switch (type)
	{
	case 0:	// 상. 열 증가
		r--; break;

	case 1:	// 하. 행 증가
		r++; break;

	case 2:	// 좌. 행 증가
		c--; break;

	case 3:	// 우. 행 증가
		c++; break;

	case 4:	// horizontal, 우하 대각. 행, 열 증가
		r++; c++; break;

	case 5:	// horizontal, 우상 대각. 행 감소, 열 증가
		r--;  c++; break;

	case 6:	// horizontal, 좌상 대각. 행, 열 감소
		r--; c--; break;
	
	case 7:	// horizontal, 좌하 대각. 행, 열 증가
		r++; c--; break;
	}
}

struct Render
{
	int** dat = nullptr;	//데이터가 있는 주소
	int size = LEN;

	void setData(int**);		// 데이커가 있는 주소를 멤버 변수로 연결(Logic.dat -> Render.dat)
	void printBoard(int);			// 전체 바둑판을 그림
	string getString(string, int, int);	// 특정 위치에서 바둑판 선을 그릴지 바둑알을 그릴지 결졍
	int getIndex(char);			// 위치값으로 입력된 문자열을 하나하나 분석해서 2차원 배열의 인덱스를 찾는다
	void printTop();			// 상단 바둑판 라인을 그림
	void printMid(int);			// 중간
	void printBtm();
};

void Render::setData(int** p)
{
	dat = p;	// 매개 인자로 주어진 주소로 멤버변수 dat에 연결
}

void Render::printTop()
{
	cout << getString("┌", 0, 0);	// 좌상단 끝 모서리, (0,0)데이터 참조.
	// (0, i + 1)데이터 참조
	for (int i = 0; i < size - 2; i++)	cout << getString("┬", 0, i + 1);
	cout << getString("┐", 0, LEN - 1) << "0\n";	// (0,15) 데이터 참조
}

void Render::printMid(int line)
{
	cout << getString("├", line, 0);
	for (int i = 0; i < size - 2; i++)	cout << getString("┼", line, i + 1);
	cout << getString("┤", line, LEN - 1);
	// 오른쪽 UI 출력
	if (line <= 9)	cout << line << '\n';
	else cout << (char)('a' + line - 10) << '\n';
}

void Render::printBtm()
{
	cout << getString("└", LEN - 1, 0);
	for (int i = 0; i < size - 2; i++)	cout << getString("┴", LEN - 1, i + 1);
	cout << getString("┘", LEN - 1, LEN - 1);
	cout << (char)('a' + LEN - 1 - 10) << '\n';
}

void Render::printBoard(int g)
{
	if (g == 1)
	{
		cout << "0 1 2 3 4 5 6 7 8 9 a b c d e f g h i\n";

		printTop();
		for (int i = 0; i < size - 2; i++)	printMid(i + 1);
		printBtm();
	}
	if (g == 2)
	{
		cout << "   0   1   2   3   4   5   6   7   \n";	//UI 출력

		// 상단 출력
		cout << "┌─┬─┬─┬─┬─┬─┬─┬─┐\n";

		// 중단 출력
		for (int j = 0; j < 7; j++)
		{
			cout << "│";
			for (int i = 0; i < 8; i++)
			{
				cout << getString("  ", j, i);
				cout << "│";
			}
			cout << j << '\n';
			cout << "├─┼─┼─┼─┼─┼─┼─┼─┤\n";
		}

		// 하단 출력
		cout << "│";
		for (int i = 0; i < 8; i++)
		{
			cout << getString("  ", 7, i);
			cout << "│";
		}
		cout << 7 << '\n';
		cout << "└─┴─┴─┴─┴─┴─┴─┴─┘\n";
	}
}

string Render::getString(string str, int r, int c)
{
	if (dat[r][c] == 0)	return str;
	else if (dat[r][c] == 1)	return "●";
	else return "○";
}

int Render::getIndex(char c)
{
	// "Input Position : "에서 입력받은 문자를 Logic 데이터 수정을 위한 배열의 인덱스로 변환.
	if ('0' <= c && c <= '9')	return c - '0';
	else return c - 'a' + 10;
}

int main()
{
	int g;
	cout << "1. 오목, 2. 오델로\n숫자를 입력하세요 : ";
	cin >> g;

	if (g == 1)	LEN = 19;
	else LEN = 8;

	char pos[10];	// 명령을 입력받을 문자열 변수

	Logic lg;		// Logic 구조체 변수 생성
	lg.makeData(g);	// 2차원 배열을 만들어서 멤버 변수 dat를 구성

	Render rd;		// Render 구조체 변수생성
	rd.setData(lg.dat);	// Logic에서 만든 2차원 배열 공간의 주소를 Render의 dat로 연결

	bool bGameOver = false;
	while (1)
	{
		system("cls");		// 콘솔 클리어
		rd.printBoard(g);	// 바둑판 출력
		if (bGameOver)		// 게임 종료 체크
		{
			if (g == 1)cout << "Game Over\n";
			else if (lg.white > lg.black && g == 1)	cout << "White(○) Win!";
			else cout << " Black (●) Win! ";
			break;
		}

		lg.checkStone();
		if (g == 2)	cout << "Black (●) = " << lg.black << ", " << "White(○) = " << lg.white << '\n';
		if (lg.turn == 0)	cout << "Black (●)turn, ";
		else cout << "White(○)  turn, ";
		cout << "Input Position : ";
		cin >> pos;	// 위치 입력
		if (strcmp(pos, "gg") == 0)
		{
			if (g == 1)	cout << "game over\n";
			else if (lg.white > lg.black)	cout << "White(○) Win!";
			else cout << " Black (●) Win! ";
			break;	// 게임 오버 시 gg 이용
		}

		// 입력한 문자열을 분석해 Logic쪽의 데이터를 변경, 분석해 결과를 받아둠
		bGameOver = lg.putStone(rd.getIndex(pos[0]), rd.getIndex(pos[1]));
	}
	lg.deleteData();	// 동적할당 해제
}
