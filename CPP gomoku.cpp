/*
	2020-03-25 ~ 2020-?-?

	C++ 사용한 오목 만들기
*/
#include <iostream>
#define LEN 19
using namespace std;

struct Logic
{
	int** dat;
	char time = 1;
	short posX, posY, game = 0;
	char map[LEN][LEN]{ 0 };


};

struct Render
{
	int** dat;

	void InputPosition(Logic& L);
	void Rend(const Logic &L);
};

void Render::InputPosition(Logic &L)
{
	cout << "Input Position : ";
	cin >> L.posX >> L.posY;
	L.map[L.posX][L.posY] = L.time;
	if (L.time == 1)	L.time++;
	else L.time--;
}

void Render::Rend(const Logic& L)
{
	system("cls");
	cout << "  ";
	for (int i = 0; i < 10; i++)
		cout << i << ' ';

	for (int i = 0; i < 9; i++)
		cout << static_cast<char>('a' + i) << ' ';
	cout << '\n';

	for (int i = 0; i < LEN; i++)
	{

		if (i == 0)	// 첫째 줄
		{
			cout << 0;

			for (int j = 0; j < LEN; j++)
			{
				if (L.map[i][j] == 1)		//놓인 돌이 흑일 시
					cout << "○";

				else if (L.map[i][j] == 2)	//놓인 돌이 백일 시
					cout << "●";

				else						//놓인 돌이 없을 시
				{
					if (j == 0)			cout << "┌";
					else if (j == LEN - 1)	cout << "┐";
					else				cout << "┬";
				}
			}
		}

		else if (i == LEN - 1)	// 마지막 줄
		{
			cout << 'i';

			for (int j = 0; j < LEN; j++)
			{
				if (L.map[i][j] == 1)		//놓인 돌이 흑일 시
					cout << "○";

				else if (L.map[i][j] == 2)	//놓인 돌이 백일 시
					cout << "●";

				else						//놓인 돌이 없을 시
				{
					if (j == 0)			cout << "└";
					else if (j == LEN - 1)	cout << "┘";
					else				cout << "┴";
				}
			}
		}


		else
		{
			if (i < 10)	cout << i;
			else cout << static_cast<char>('W' + i);

			for (int j = 0; j < LEN; j++)
			{
				if (L.map[i][j] == 1)		//놓인 돌이 흑일 시
					cout << "○";

				else if (L.map[i][j] == 2)	//놓인 돌이 백일 시
					cout << "●";

				else						//놓인 돌이 없을 시
				{
					if (j == 0)			cout << "├";
					else if (j == LEN - 1)	cout << "┤";
					else				cout << "┼";
				}
			}
		}
		cout << '\n';
	}
}

int main()
{
	Logic L;
	Render R;
	
	R.Rend(L);

	while (L.game == 0)
	{
		R.InputPosition(L);
		R.Rend(L);
	}
}