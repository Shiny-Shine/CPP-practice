//2019-11-27 BOJ-10819(���̸� �ִ��)V2
//������ �䱸�ϴ� ������ ���� ���� ���ߴµ�, �̹��� next_permutation �Լ���
//������ ��� ����� ������ ���� �� ���ؼ� �ִ밪�� ����ߴ�.
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int calculate(vector<int>& a)
{
	int sum = 0;
	for (int i = 1; i < a.size(); i++)
		sum += abs(a[i - 1] - a[i]);

	return sum;
}

int main()
{
	int n, ans = 0;
	cin >> n;
	vector<int> a(n);

	for (int i = 0; i < n; i++)	cin >> a[i];

	sort(a.begin(), a.end());

	do
	{
		int temp = calculate(a);
		ans = max(ans, temp);
	} while (next_permutation(a.begin(), a.end()));
	//������ �ּҰ����� �ִ밪���� ���� �ܰ��� ������ ����.
	//�ѹ� �����ϸ� '�� �ܰ�' �� ū ������ ������, �ִ밪�Ͻ� false����.
	//ex) 1234 => 1243, �ݴ�� prev_permutation �Լ��� ����.

	cout << ans << '\n';
}