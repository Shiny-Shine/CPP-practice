//2019-11-25 BOJ-2751(�� �����ϱ� 2)
//TL�� �븮�� �� ����, scanf/printf �� Ǯ�� �ð��� ���� �� �ִ�.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	vector<int> num;

	for (int i = 0; i < n; i++)
	{
		int x;
		scanf("%d", &x);
		num.push_back(x);
	}
	stable_sort(num.begin(), num.end());
	for (auto i : num)	printf("%d\n", i);

}
