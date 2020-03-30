/*
	2020-03-25 ~ 2020-?-?
	C++ 사용한 오목 만들기
*/
#include <iostream>
#define LEN 19
using namespace std;

struct Logic
{
	char time = 1, posX, posY;
	int map[LEN][LEN]{ 0 };
	struct Render* rp;

	int Mok();
};

// 오목을 판단함.
int Logic::Mok()
{
	short flag = 0;

	// 세로
	for (int i = 1; i <= 4; i++)
	{
		if (map[posX][posY] == map[posX][posY + i])
			flag++;
		else
			break;
	}

	for (int i = 1; i <= 4; i++)
	{
		if (map[posX][posY] == map[posX][posY - i])
			flag++;
		else
			break;
	}

	if (flag >= 4)	return time;
	else flag = 0;

	// 가로
	for (int i = 1; i <= 4; i++)
	{
		if (map[posX][posY] == map[posX + i][posY])
			flag++;
		else
			break;
	}

	for (int i = 1; i <= 4; i++)
	{
		if (map[posX][posY] == map[posX - i][posY])
			flag++;
		else
			break;
	}

	if (flag >= 4)	return time;
	else flag = 0;

	// 대각 1
	for (int i = 1; i <= 4; i++)
	{
		if (map[posX][posY] == map[posX + i][posY + i])
			flag++;
		else
			break;
	}

	for (int i = 1; i <= 4; i++)
	{
		if (map[posX][posY] == map[posX - i][posY - i])
			flag++;
		else
			break;
	}

	if (flag >= 4)	return time;
	else flag = 0;

	// 대각 2
	for (int i = 1; i <= 4; i++)
	{
		if (map[posX][posY] == map[posX + i][posY - i])
			flag++;
		else
			break;
	}

	for (int i = 1; i <= 4; i++)
	{
		if (map[posX][posY] == map[posX - i][posY + i])
			flag++;
		else
			break;
	}

	if (flag >= 4)	return time;
	else flag = 0;

	return 0;
}

struct Render
{
	struct Logic* lp;
	void InputPosition(Logic* L);
	void Rend(const Logic* L);
};

// 돌을 놓을 자리를 입력받음.
void Render::InputPosition(Logic* L)
{
	if (L->time == 1)
		cout << "Black's Turn, ";
	else
		cout << "White's Turn, ";

	cout << "Input Position : ";
	cin >> L->posX >> L->posY;

	if (L->posX >= '0' && L->posX <= '9')
		L->posX -= '0';
	else if (L->posX >= 'a' && L->posX <= 'i')
		L->posX -= 87;

	if (L->posY >= '0' && L->posY <= '9')
		L->posY -= '0';
	else if (L->posY >= 'a' && L->posY <= 'i')
		L->posY -= 87;

	L->map[L->posX][L->posY] = L->time;
	if (L->time == 1)	L->time++;
	else L->time--;
}

// 맵과 돌을 그림.
void Render::Rend(const Logic* L)
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
				if (L->map[i][j] == 1)		//놓인 돌이 흑일 시
					cout << "○";

				else if (L->map[i][j] == 2)	//놓인 돌이 백일 시
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
				if (L->map[i][j] == 1)		//놓인 돌이 흑일 시
					cout << "○";

				else if (L->map[i][j] == 2)	//놓인 돌이 백일 시
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
				if (L->map[i][j] == 1)		//놓인 돌이 흑일 시
					cout << "○";

				else if (L->map[i][j] == 2)	//놓인 돌이 백일 시
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

	L.rp = &R;
	R.lp = &L;


	R.Rend(R.lp);

	while (1)
	{
		R.InputPosition(R.lp);
		R.Rend(R.lp);

		int game = L.Mok();
		if (game == 2)
		{
			cout << "Black Win!\n";
			break;
		}
		else if (game == 1)
		{
			cout << "White Win!\n";
			break;
		}
	}
}
