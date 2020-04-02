/*
	2020-04-02 C++ Gomoku 해설

	● 구조체 Logic
	멤버 함수(메소드)는 객체 외부에서 구조체 내부의 변수, 즉 데이터들을 수정하는 용도로 많이 사용된다.
	메소드를 통해특정 값을 시반으로 매개 인자 구성하고 그 매개 인자를 통해
	구조체 내부 데이터들을 관리하는 형태인 셈이다.
	이차원 배열을 동적할당하기 위한 int** dat 변수가 가장 중요한 데이터가 된다.
	'Logic'이라는 구조체에서는 "데이터 관리에 대한 메소드만 구성" 한다. 물론, 이차원 배열애 대한
	메모리상 공간 생성도 이 구조체에서 이루어질 것이고, 배열값에 대한 관리도 이 구조체의 중요 목적 중 하나이다.

	● 구조체 Render
	'render'는 '표현하다'라는 사전적 의미를 가지고 있다. 렌더링(rendering)이라는 말을 들어보았을텐데,
	렌더링은 일종의 드로잉(drawing)인 셈이다. 데이터는 숫자에 불과하다.
	이를 유의미한 가시적 형태로 표현하는 것이 주된 기능이다. 즉, "데이터에 대한 관리는 없다".
	● Logic vs Render
	'Logic'과 'Render'를 분리했을 때의 장점은 여러가지이다.
	Logic 구조체에서 구성된 데이터, 메소드 등은 언어(c, java 등)에 다소 독립적으로 손쉽게 전환시킬 수 있다.
	같은 알고리즘으로 처리하면 되기 때문에 문법적인 부분만 고려하면 쉽게 전환이 가능하다.
	어차피 Logic 파트에서는 데이터 관리만 한다. 즉, 숫자에 대한 관리만 이루어지며 그 숫자들이
	어떤 의미를 가지는지는 신경쓸 필요 없다. Logic에서 임의의 배열 요소값으로 1을할당하고,
	다른 요소에 2를 할당했다 치면 Logic에서는 1과 2가 어떤의미인지는 생각할 필요가 없다.
	이 값들에 의미를 부여하고 그 값을 바탕으로 표현하는 쪽이 Render이다.
	렌더링 방식을 콘솔, 유니티, 언리얼, 윈도우 창 등 어떤 걸 쓰더라도 Logic의 내용이 안바뀐다는 점이 중요한 포인트다.
*/

#include <iostream>
#include <cstdlib>
#define LEN 19
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
	bool check(int, int);		// 특정 위치에서 가로, 세로, 대각의 데이터를 탐색한다
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
	if (check(r, c))	return true;

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

bool Logic::check(int pr, int pc)			// (pr, pc) : 좌표 지점
{
	int cnt = 0, current = 0;
	int r, c;

	// check horizontal, 수평 체크
	for (c = 0; c < size; add(0, pr, c))	// (pr, 0) : 좌표지점 기준 왼쪽 끝
	{
		if (dat[pr][c] == 0 || current != dat[pr][c]) { current = dat[pr][c]; cnt = 1; }
		else cnt++;
		if (cnt == 5)	return true;
	}

	// check vertical, 수직 체크
	cnt = 0;
	for (r = 0; r < size; add(1, r, pc))	// (0, pc) : 좌표지점 기준 위쪽 끝
	{
		if (dat[r][pc] == 0 || current != dat[r][pc]) { current = dat[r][pc]; cnt = 1; }
		else cnt++;
		if (cnt == 5)	return true;
	}

	// check right-down, 우하 대각 체크, 대각을 따라 좌표기준 우하 맨 위 좌표를 찾는다.
	r = pr - MIN(pr, pc);
	c = pc - MIN(pr, pc);
	cnt = 0;
	for (; r < size && c < size; add(2, r, c))	// (r, c) : 죄표기준 우하 대각의 첫 위치부터 시작
	{
		if (dat[r][c] == 0 || current != dat[r][c]) { current = dat[r][c]; cnt = 1; }
		else cnt++;
		if (cnt == 5)	return true;
	}

	// check right-up, 우상 대각 체크, 대각을 따라 좌표기준 우상 맨 아래 좌표를 찾는다.
	r = pr + MIN(size - 1 - pr, pc);
	c = pc - MIN(size - 1 - pr, pc);
	cnt = 0;
	for (; r >= 0 && c < size; add(3, r, c))	// (r, c) : 죄표기준 우상 대각의 첫 위치부터 시작
	{
		if (dat[r][c] == 0 || current != dat[r][c]) { current = dat[r][c]; cnt = 1; }
		else cnt++;
		if (cnt == 5)	return true;
	}

	return false;
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
	void printTop();			// 상단 바둑판 라인을 그림
	void printMid(int);			// 중간
	void printBtm();			// 하단
	void printBoard();			// 전체 바둑판을 그림
	void printTopPosInfo();		// 바둑판 입력을 위한 상단 UI를 그림(좌표)
	string getString(string, int, int);	// 특정 위치에서 바둑판 선을 그릴지 바둑알을 그릴지 결졍
	int getIndex(char);			// 위치값으로 입력된 문자열을 하나하나 분석해서 2차원 배열의 인덱스를 찾는다
};

void Render::setData(int** p)
{
	dat = p;	// 매개 인자로 주어진 주소로 멤버변수 dat에 연결
}

void Render::printBoard()
{
	printTopPosInfo();	// 상단 UI 그리고
	printTop();			// 상단 바둑판 그리고
	for (int i = 0; i < size - 2; i++)	printMid(i + 1);// 중간 바둑판들 그리고
	printBtm();			// 하단 바둑판 그린다
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

void Render::printTopPosInfo()
{
	cout << "0 1 2 3 4 5 6 7 8 9 a b c d e f\n";
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

		cout << "Input Position : ";
		cin >> pos;	// 위치 입력
		if (strcmp(pos, "gg") == 0)	break;	// 중간 탈주 시 gg 이용

		// 입력한 문자열을 분석해 Logic쪽의 데이터를 변경, 분석해 결과를 받아둠
		bGameOver = lg.putStone(rd.getIndex(pos[0]), rd.getIndex(pos[1]));
	}
	lg.deleteData();	// 동적할당 해제
}