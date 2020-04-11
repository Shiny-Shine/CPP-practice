// 2020-04-11 C++ Struct Othello 해설
#include <iostream>
#include <vector>
using namespace std;

struct Logic
{
	int** dat;	// 2차원 배열을 만들어 주소를 기억시킬 포인터변수.
	int size = 8;
	int turn = 0;
	vector<pair<int, int>>mem;	// 오델로 규칙에 따라 상태값이 바뀌어야 할 지점의 위치값을 기억.

	enum    // 수치화된 열거형 데이터를 묶어서 관리, 코드에서 UP = 0, 내려갈수록 1씩 증가.
	{
		UP = 0,	// 상
		UR,		// 우상
		RIGHT,	// 우
		DR,		// 우하
		DOWN,	// 하
		DL,		// 좌하
		LEFT,	// 좌
		UL		// 좌상
	};

	void makeData();
	void daleteData();
	void initData();
	bool putStone(int, int);
	bool canStone(int, int);
	bool check(int, int, int);
	bool isBreak(int, int, bool&);
};

void Logic::makeData()
{
	dat = (int**)malloc(sizeof(int*) * size);
	dat[0] = (int*)malloc(sizeof(int) * size * size);
	for (int i = 1; i < size; i++)	dat[i] = dat[i - 1] + size;
	memset(dat[0], 0, sizeof(int) * size * size);

	initData();
}

void Logic::daleteData()
{
	free(dat[0]);
	free(dat);
}

void Logic::initData() {
	dat[3][3] = dat[4][4] = 1;
	dat[3][4] = dat[4][3] = 2;
}

bool Logic::putStone(int r, int c)
{
	if (dat[r][c] > 0)	return false;
	if (canStone(r, c) == false)	return false;

	dat[r][c] = turn + 1;
	turn = 1 - turn;
	return false;
}

bool Logic::canStone(int r, int c)
{
	bool res = false;
	// 돌을 놓은 지점에서 8방향 체크.
	if (check(LEFT, r, c))	res = true;
	if (check(UP, r, c))	res = true;
	if (check(RIGHT, r, c))	res = true;
	if (check(DOWN, r, c))	res = true;
	if (check(UR, r, c))	res = true;
	if (check(DR, r, c))	res = true;
	if (check(UL, r, c))	res = true;
	if (check(DL, r, c))	res = true;
	return res;	// 돌 놓을 수 있으면 true, 아님 false
}

bool Logic::isBreak(int r, int c, bool& res)
{
	if (dat[r][c] == 0)	return true;	// empty, check stop
	else if (dat[r][c] == turn + 1)		// same stone
	{
		if (mem.empty() == false)	res = true;	// 백터값에 데이터 있으면 돌 놓을수 있다.
		return true;// chack stop
	}
	else mem.push_back(make_pair(r, c));	// 다른 색 돌, 벡터에 데이터 추가

	return false;	// chack go
}

bool Logic::check(int dir, int pr, int pc)
{
	bool res = false;

	switch (dir)
	{
	case LEFT:
		for (int c = pc - 1; c >= 0; c--)
		{
			// chack stop면 break, 돌을 놓을 수 있으면 res = true
			if (isBreak(pr, c, res))	break;
		}
		break;
	}
}
