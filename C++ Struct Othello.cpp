/*
	2020-04-02 ~ ??? C++ Othello
	2020-04-02 현재 check 제외 전부 구현
*/

#include <iostream>
#include <cstdlib>
#define LEN 8
using namespace std;

struct Logic
{
	// ● int** dat;
	// Logic 구조체에서는 데이터의 공간을 만들고 해당 공간에서의 데이터 관리가 주 목적이기에
	// 2차원 배열의 공간을 동적 할당하고 메모리의 주소를 받아둔다

	int** dat = nullptr;		// 2차원 배열을 만들어서 주소를 기억시킬 포인터 변수
	int size = LEN;	// 오목판의 사이즈
	int turn = 0;	// 백돌, 흑돌 차례를 나타냄

	void makeData();			// 2차원 배열을 힙에 동적 할당한다
	void deleteData();			// 힙메모리에 생성시킨 공간을 해재시킴
	bool putStone(int, int);	// 특정 위치의 값을 '1', '2'로 변경시킨다
	void check(int, int);		// 특정 위치에서 가로, 세로, 대각의 데이터를 탐색한다
	void add(int, int&, int&);	// 탐색시 캄색 커서의 위치를 이동시킴
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
	if (dat[r][c] > 0)	return false;	//이미 데이터가 잇는 상태면 취소

	dat[r][c] = turn + 1;	// 배열값을 1또는 2로 수정
	check(r, c);			// 돌을 놓을 수 있는지 체크

	turn = 1 - turn;		// 턴 변경
	return false;
	// 이 함수의 반환값이 true 면 게임을 종료시킨다
}

void Logic::add(int type, int& r, int& c)	// 참조매개인자(&)는 함수 외부의 변수값을 변경하겠다는 의미
{
	switch (type)
	{
	case 0:	// horizontal, 수평. 열 증가
		c++; break;

	case 1:	// vertical, 수직. 행 증가
		r++; break;

	case 2:	// horizontal, 우하 대각. 행, 열 증가
		r++; c++; break;

	case 3:	// horizontal, 우상 대각. 행 감소, 열 증가
		r--;  c++; break;
	}
}

#define MIN(X,Y) (((X) < (Y)) ? (X) : (Y))	//매크로 함수 구성

void Logic::check(int pr, int pc)			// (pr, pc) : 좌표 지점
{
	int cnt = 0, current = turn + 1, flag = 0;
	int r, c, flag1, flag2, flag3, flag4, rev = 0;

	// check horizontal, 수평 체크
	for (c = 0; c < size; add(0, pr, c))	// (pr, 0) : 좌표지점 기준 왼쪽 끝
	{
		if (pc > 0 && pc < 7 && dat[pr][pc + 1] == current && dat[pr][pc - 1] == current)	flag = -1;
		if (flag == 1 && dat[pr][c] == 0)
		{
			flag = 0;
		}
		if (dat[pr][c] == current)
		{
			flag++;
			if (flag >= 3 && rev != 0)	continue;
			if (flag == 2 && rev == 0)
			{
				flag--;
				flag1 = c + 1;
			}
			if (flag == 2)	flag2 = c;
			else flag1 = c + 1;
		}
		else if (flag == 1 && dat[pr][c] != 0)
		{
				rev++;
		}
	}
	if (flag >= 2)
	{
		for (c = flag1; c < flag2; add(0, pr, c))
		{
			if (dat[pr][c] == 0 || dat[pr][c + 1] == 0)	break;
			dat[pr][c] = current;
		}
		cnt++;
	}

	rev = flag = flag1 = flag2 = 0;
	// check vertical, 수직 체크
	for (r = 0; r < size; add(1, r, pc))	// (0, pc) : 좌표지점 기준 위쪽 끝
	{
		if (pr > 0 && pr < 7 && dat[pr + 1][pc] == current && dat[pr - 1][pc] == current)	flag = -1;
		if (flag == 1 && dat[r][pc] == 0)
		{
			flag = 0;
		}
		if (dat[r][pc] == current)
		{
			flag++;
			if (flag >= 3 && rev != 0)	continue;
			if (flag == 2 && rev == 0)
			{
				flag--;
				flag1 = r + 1;
			}
			if (flag == 2)	flag2 = r;
			else flag1 = r + 1;
		}
		else if (flag == 1 && dat[r][pc] != 0)
		{
			rev++;
		}
	}
	if (flag >= 2)
	{
		for (r = flag1; r < flag2; add(1, r, pc))
		{
			if (dat[r][pc] == 0 || dat[r + 1][pc] == 0)	break;
			dat[r][pc] = current;
		}
		cnt++;
	}

	// check right-down, 우하 대각 체크, 대각을 따라 좌표기준 우하 맨 위 좌표를 찾는다.
	r = pr - MIN(pr, pc);
	c = pc - MIN(pr, pc);
	rev = flag = flag1 = flag2 = flag3 = flag4 = 0;
	for (; r < size && c < size; add(2, r, c))	// (r, c) : 죄표기준 우하 대각의 첫 위치부터 시작
	{
		if (pr > 0 && pr < 7 && dat[pr + 1][pc + 1] == current && dat[pr - 1][pc - 1] == current && pc > 0 && pc < 7)	flag = -1;
		if (flag == 1 && dat[r][c] == 0)
		{
			flag = 0;
		}
		if (dat[r][c] == current)
		{
			flag++;
			if (flag >= 3 && rev != 0)	continue;
			if (flag == 2 && rev == 0)
			{
				flag--;
				flag1 = r + 1;
				flag3 = c + 1;
			}
			if (flag == 2)
			{
				flag2 = r;
				flag4 = c;
			}
			else
			{
				flag1 = r + 1;
				flag3 = c + 1;
			}
		}
		else if (flag == 1 && dat[r][c] != 0)
		{
			rev++;
		}
	}
	if (flag >= 2)
	{
		r = flag1;	c = flag3;
		for (; r < flag2 && c < flag4; add(2, r, c))
		{
			if (dat[r][c] == 0 || dat[r + 1][c + 1] == 0)	break;
			dat[r][c] = current;
		}
		cnt++;
	}

	// check right-up, 우상 대각 체크, 대각을 따라 좌표기준 우상 맨 밑 좌표를 찾는다.
	r = pr + MIN(size - 1 - pr, pc);
	c = pc - MIN(size - 1 - pr, pc);
	rev = flag = flag1 = flag2 = flag3 = flag4 = 0;
	for (; r >= 0 && c < size; add(3, r, c))	// (r, c) : 죄표기준 우상 대각의 첫 위치부터 시작
	{
		if ((pr > 0 && pr < 7 && pc > 0 && pc < 7) && dat[pr - 1][pc + 1] == 0 && dat[pr + 1][pc - 1] == current)	flag = 0;
		if (flag == 1 && dat[r][c] == 0)
		{
			flag = 0;
		}
		if (dat[r][c] == current)
		{
			flag++;
			if (flag >= 3 && rev != 0)	continue;
			if (flag == 2 && rev == 0)
			{
				flag--;
				flag1 = r - 1;
				flag3 = c + 1;
			}
			if (flag == 2)
			{
				flag2 = r;
				flag4 = c;
			}
			else
			{
				flag1 = r - 1;
				flag3 = c + 1;
			}
		}
		else if (flag == 1 && dat[r][c] != 0)
		{
			rev++;
		}
	}
	if (flag >= 2)
	{
		r = flag1;	c = flag3;
		for (; r >= flag2 && c < flag4; add(3, r, c))
		{
			if (dat[r][c] == 0 || dat[r - 1][c + 1] == 0)	break;
			dat[r][c] = current;
		}
		cnt++;
	}

	if (cnt == 0)
		dat[pr][pc] = 0;
}

struct Render
{
	/*
		● int** dat;
		Render 구조체에서도 2차원 배열의 데이터 주소값은 매우 중요하다.
		단순히 숫자로만 구성된 데이터 값에 의미를 부여하고 헤당 값에 따른 시각화 작업이 진행되야 하기 때문.
		이 때 중요한 부분은 dat 주소값에서의 데이터의 수정은 이 구조체의 몫이 아니다.
		일종의 "'읽기'만 가능한 형태" 생각하는 편이 가장 바람직할 이해일 듯 하다.
		그래서 데이터를 읽기 위해서는 데이터가 있는 위치값이 Render 구조체의 멤버 변수인 dat에
		할당되어 있어야 한다. 이 역할을 멤버 함수인 setData로 진행항 예정이다.
		데이터가 있는 곳의 주소를 연결하는 것이다.
	*/
	int** dat = nullptr;	//데이터가 있는 주소
	int size = LEN;

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
}

string Render::getString(string str, int r, int c)
{
	/*
		Render 구조체 입장에서는 렌더링 차원에서 이 함수가 핵심이다.
		연결된 데이터를 읽어서 데이터 값에 따른 렌더링 방식을 결정하고 있다.
		임의의 위치(r,c)에서의 데이터를 확인하고
		데이터가 0이면 주어진 선 문자열, str을 출력시키고,
		데이터가 1또는 2라면 바둑돌을 출력시킨다
	*/
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
