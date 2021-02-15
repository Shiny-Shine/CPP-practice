// 2020-08-08 BOJ - 2309(일곱 난쟁이)
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int dwarf[9];
	int sum = 0, flag = 0;
	for (int i = 0; i < 9; i++)
	{
		cin >> dwarf[i];
		sum += dwarf[i];
	}

	for (int i = 0; i < 9; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			if (sum - dwarf[i] - dwarf[j] == 100)
			{
				flag++;
				dwarf[i] = 0;
				dwarf[j] = 0;
				break;
			}
		}
		if (flag != 0)	break;
	}

	sort(dwarf, dwarf + 9);
	for (int i = 2; i < 9; i++)	cout << dwarf[i] << '\n';
}
