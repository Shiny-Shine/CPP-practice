/*
	2020-03-25 ~ 2020-03-30
	C++ 사용한 오목 만들기
*/
#include <iostream>
#define LEN 19
using namespace std;

struct Logic
{
	int** dat;
	int time = 1;
	int posX, posY;

	int Mok();
	void InputPosition();
};

void Logic::InputPosition()
{
	cin >> posX >> posY;

	if (posX >= '0' && posX <= '9')
		posX -= '0';
	else if (posX >= 'a' && posX <= 'i')
		posX -= 87;

	if (posY >= '0' && posY <= '9')
		posY -= '0';
	else if (posY >= 'a' && posY <= 'i')
		posY -= 87;

	dat[posX][posY] = time;
	if (time == 1)	time++;
	else time--;
}

int Logic::Mok()
{
	short flag = 0;

	// 세로
	for (int i = 1; i <= 4; i++)
	{
		if (dat[posX][posY] == dat[posX][posY + i])
			flag++;
		else
			break;
	}

	for (int i = 1; i <= 4; i++)
	{
		if (dat[posX][posY] == dat[posX][posY - i])
			flag++;
		else
			break;
	}

	if (flag >= 4)	return time;
	else flag = 0;

	// 가로
	for (int i = 1; i <= 4; i++)
	{
		if (dat[posX][posY] == dat[posX + i][posY])
			flag++;
		else
			break;
	}

	for (int i = 1; i <= 4; i++)
	{
		if (dat[posX][posY] == dat[posX - i][posY])
			flag++;
		else
			break;
	}

	if (flag >= 4)	return time;
	else flag = 0;

	// 대각 1
	for (int i = 1; i <= 4; i++)
	{
		if (dat[posX][posY] == dat[posX + i][posY + i])
			flag++;
		else
			break;
	}

	for (int i = 1; i <= 4; i++)
	{
		if (dat[posX][posY] == dat[posX - i][posY - i])
			flag++;
		else
			break;
	}

	if (flag >= 4)	return time;
	else flag = 0;

	// 대각 2
	for (int i = 1; i <= 4; i++)
	{
		if (dat[posX][posY] == dat[posX + i][posY - i])
			flag++;
		else
			break;
	}

	for (int i = 1; i <= 4; i++)
	{
		if (dat[posX][posY] == dat[posX - i][posY + i])
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
	int** dat;
	int* time;

	void Rend();
};

void Render::Rend()
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
				if (dat[i][j] == 1)		//놓인 돌이 흑일 시
					cout << "○";

				else if (dat[i][j] == 2)	//놓인 돌이 백일 시
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
				if (dat[i][j] == 1)		//놓인 돌이 흑일 시
					cout << "○";

				else if (dat[i][j] == 2)	//놓인 돌이 백일 시
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
				if (dat[i][j] == 1)		//놓인 돌이 흑일 시
					cout << "○";

				else if (dat[i][j] == 2)	//놓인 돌이 백일 시
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

	cout << "input position : ";
}

int main()
{
	Logic L;
	Render R;

	L.dat = (int**) new int* [LEN];
	L.dat[0] = (int*) new int[LEN * LEN];
	for (int i = 1; i < LEN; i++)		L.dat[i] = L.dat[i - 1] + LEN;
	for (int i = 0; i < LEN * LEN; i++)	L.dat[i / LEN][i % LEN] = 0;

	R.dat = L.dat;
	R.time = &L.time;

	R.Rend();

	while (1)
	{
		L.InputPosition();
		R.Rend();

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
