// 2020-08-29 BOJ-14888(연산자 끼워넣기)
// 연산자들을 0, 1, 2, 3으로 구분해 넣는다, 입력이 +2개 *1개(2 0 1 0)라면 배열에 0, 0, 2로 저장한다.
//이후 배열을 다음순열로 섞어주며 연산을 진행한다.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, max = -1000000000, min = 1000000000;
	cin >> n;
	vector<int> arr(n), operat;
	int opercnt[4];

	for (int i = 0; i < n; i++)	// 수 입력
		cin >> arr[i];

	for (int i = 0; i < 4; i++)	// 연산자 입력
		cin >> opercnt[i];

	for (int i = 0; i < 4; i++)	// 입력받은 연산자를 구분해 배열에 저장.
	{
		if (i == 0)	for (int j = 0; j < opercnt[i]; j++)	operat.push_back(0);
		if (i == 1)	for (int j = 0; j < opercnt[i]; j++)	operat.push_back(1);
		if (i == 2)	for (int j = 0; j < opercnt[i]; j++)	operat.push_back(2);
		if (i == 3)	for (int j = 0; j < opercnt[i]; j++)	operat.push_back(3);
	}

	do
	{	// 수열의 첫번째 값으로 시작
		int sum = arr[0];
		for (int i = 0; i < n - 1; i++)
		{
			if (operat[i] == 0)	sum += arr[i + 1];
			if (operat[i] == 1)	sum -= arr[i + 1];
			if (operat[i] == 2)	sum *= arr[i + 1];
			if (operat[i] == 3)	sum /= arr[i + 1];
		}

		if (sum > max)	max = sum;
		if (sum < min)	min = sum;
	} while (next_permutation(operat.begin(), operat.end()));
	// 다음순열로 섞어줌

	cout << max << '\n' << min;
}
