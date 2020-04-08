/*
	2020-04-02 ~ ??? C++ Othello
	2020-04-02 현재 check 제외 전부 구현
	2020-04-08 로직 전부 수정
*/

#include <iostream>
#include <cstdlib>
#define LEN 8
using namespace std;

struct Logic
{

	int** dat = nullptr;		// 2차원 배열을 만들어서 주소를 기억시킬 포인터 변수
	int size = LEN;	// 오목판의 사이즈
	int turn = 0;	// 백돌, 흑돌 차례를 나타냄

	void makeData();
	void deleteData();
	bool putStone(int, int);
	bool checkAndReverse(int, int);	
};

void Logic::makeData()
{
	// 2차원 배열을 메모리 공간을 동적 할당한다.
	dat = (int**)malloc(sizeof(int) * size);
	dat[0] = (int*)malloc(sizeof(int) * size * size);
	for (int i = 1; i < size; i++)	dat[i] = dat[i - 1] + size;	//포인터연산

	// 모든 공간의 값을 0으로 초기화
	memset(dat[0], 0, sizeof(int) * size * size);
	dat[3][3] = 2;
	dat[4][4] = 2;
	dat[3][4] = 1;
	dat[4][3] = 1;
}

void Logic::deleteData()
{
	free(dat[0]);	// 동적할당된 1차 주소값들 해제
	free(dat);		// 동적할당된 2차 주소값 해제
}

bool Logic::putStone(int r, int c)
{
	if (dat[r][c] > 0)	return false;	//이미 데이터가 있는 상태면 취소

	!checkAndReverse(r, c);			// 돌을 놓을 수 있는지 체크

	dat[r][c] = turn + 1;	// 배열값을 1또는 2로 수정

	turn = 1 - turn;		// 턴 변경
	return false;
	// 이 함수의 반환값이 true 면 게임을 종료시킨다
}

bool Logic::checkAndReverse(int r, int c)			// (pr, pc) : 좌표 지점
{
	int pr = r, pc = c, flag = 0, cnt = 0, current = turn + 1;

	// 상
	while (pr >= 0)
	{
		if (pr == r) { pr--; continue; }

		if (cnt == 0 && dat[pr][c] == current)	break;
		if (dat[pr][c] == 0)	break;
		if (dat[pr][c] == current) { flag++; break; }
		cnt++;
		pr--;
	}
	if (flag == 1)
	{
		for (int i = r; i > pr; i--)
			dat[i][c] = current;
	}

	// 하
	pr = r, flag = 0, cnt = 0;
	while (pr < size)
	{
		if (pr == r) { pr++; continue; }

		if (cnt == 0 && dat[pr][c] == current)	break;
		if (dat[pr][c] == 0)	break;
		if (dat[pr][c] == current) { flag++; break; }
		cnt++;
		pr++;
	}
	if (flag == 1)
	{
		for (int i = r; i < pr; i++)
			dat[i][c] = current;
	}

	// 좌
	flag = 0, cnt = 0;
	while (pc >= 0)
	{
		if (pc == c) { pc--; continue; }

		if (cnt == 0 && dat[r][pc] == current)	break;
		if (dat[r][pc] == 0)	break;
		if (dat[r][pc] == current) { flag++; break; }
		cnt++;
		pc--;
	}
	if (flag == 1)
	{
		for (int i = c; i > pc; i--)
			dat[r][i] = current;
	}

	// 우
	pc = c, flag = 0, cnt = 0;
	while (pc < size)
	{
		if (pc == c) { pc++; continue; }

		if (cnt == 0 && dat[r][pc] == current)	break;
		if (dat[r][pc] == 0)	break;
		if (dat[r][pc] == current) { flag++; break; }
		cnt++;
		pc++;
	}
	if (flag == 1)
	{
		for (int i = c; i < pc; i++)
			dat[r][i] = current;
	}

	// 좌상
	pr = r, pc = c, flag = 0, cnt = 0;
	while (pr >= 0 && pc >= 0)
	{
		if (pr == r) { pr--; pc--; continue; }

		if (cnt == 0 && dat[pr][pc] == current)	break;
		if (dat[pr][pc] == 0)	break;
		if (dat[pr][pc] == current) { flag++; break; }
		cnt++;
		pr--; pc--;
	}
	if (flag == 1)
	{
		for (int i = r, j = c; i > pr && j > pc; i--, j--)
			dat[i][j] = current;
	}

	// 좌하
	pr = r, pc = c, flag = 0, cnt = 0;
	while (pr < size && pc >= 0)
	{
		if (pr == r) { pr++; pc--; continue; }

		if (cnt == 0 && dat[pr][pc] == current)	break;
		if (dat[pr][pc] == 0)	break;
		if (dat[pr][pc] == current) { flag++; break; }
		cnt++;
		pr++; pc--;
	}
	if (flag == 1)
	{
		for (int i = r, j = c; i < pr && j > pc; i++, j--)
			dat[i][j] = current;
	}

	// 우상
	pr = r, pc = c, flag = 0, cnt = 0;
	while (pr >= 0 && pc < size)
	{
		if (pr == r) { pr--; pc++; continue; }

		if (cnt == 0 && dat[pr][pc] == current)	break;
		if (dat[pr][pc] == 0)	break;
		if (dat[pr][pc] == current) { flag++; break; }
		cnt++;
		pr--; pc++;
	}
	if (flag == 1)
	{
		for (int i = r, j = c; i > pr; i--, j++)
			dat[i][j] = current;
	}

	// 우하
	pr = r, pc = c, flag = 0, cnt = 0;
	while (pr < size && pc < size)
	{
		if (pr == r) { pr++; pc++; continue; }

		if (cnt == 0 && dat[pr][pc] == current)	break;
		if (dat[pr][pc] == 0)	break;
		if (dat[pr][pc] == current) { flag++; break; }
		cnt++;
		pr++; pc++;
	}
	if (flag == 1)
	{
		for (int i = r, j = c; i < pr; i++, j++)
			dat[i][j] = current;
	}

	return true;
}

struct Render
{
	int** dat = nullptr;	//데이터가 있는 주소
	int size = LEN;
	int black = 0, white = 0;

	void setData(int**);		// 데이커가 있는 주소를 멤버 변수로 연결(Logic.dat -> Render.dat)
	void printBoard();			// 전체 바둑판을 그림
	string getString(string, int, int);	// 특정 위치에서 바둑판 선을 그릴지 바둑알을 그릴지 결졍
	int getIndex(char);			// 위치값으로 입력된 문자열을 하나하나 분석해서 2차원 배열의 인덱스를 찾는다
};

void Render::setData(int** p)
{
	dat = p;	// 매개 인자로 주어진 주소로 멤버변수 dat에 연결
}

void Render::printBoard()
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
	char pos[10];	// 명령을 입력받을 문자열 변수

	Logic lg;		// Logic 구조체 변수 생성
	lg.makeData();	// 2차원 배열을 만들어서 멤버 변수 dat를 구성

	Render rd;		// Render 구조체 변수생성
	rd.setData(lg.dat);	// Logic에서 만든 2차원 배열 공간의 주소를 Render의 dat로 연결

	bool bGameOver = false;
	while (1)
	{
		system("cls");		// 콘솔 클리어
		rd.printBoard();	// 바둑판 출력
		if (bGameOver)		// 게임 종료 체크
		{
			cout << "Game Over\n";
			break;
		}

		cout << "Black (●) = " << rd.black << ", " << "White(○) = " << rd.white << '\n';
		if (lg.turn == 0)	cout << "Black (●)turn, ";
		else cout << "White(○)  turn, ";
		cout << "Input Position : ";
		cin >> pos;	// 위치 입력
		if (strcmp(pos, "gg") == 0)
		{
			if (lg.turn == 0)	cout << "White(○) Win!";
			else cout << " Black (●) Win! ";
			break;	// 게임 오버 시 gg 이용
		}

		// 입력한 문자열을 분석해 Logic쪽의 데이터를 변경, 분석해 결과를 받아둠
		bGameOver = lg.putStone(rd.getIndex(pos[0]), rd.getIndex(pos[1]));
	}
	lg.deleteData();	// 동적할당 해제
}
