//2019-11-18 BOJ-2346(ǳ�� �Ͷ߸���)
//ó���� ������ ���� �߸��ؼ� �ڵ带 ������. �ι�° ������ ��������
//v.size() �� �׳� int ���� �̹��� ����(unsigned) ������ Ʋ�ȴ�.
//�ָ����� �ٵ�� �־��µ� ��¥������. ������ �̷��� ���α׷����� �ϻ��̶��� �ϴ���.
#include <iostream>
#include <vector>

using namespace std;

vector<pair<int, int>> v;
int n;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int idx = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int tmp;
		cin >> tmp;
		v.push_back(make_pair(tmp, i + 1));
	}

	for (int i = 0; ; i++)
	{
		int tmp = v[idx].first;
		cout << v[idx].second << ' ';
		if (--n == 0)	break;

		v.erase(v.begin() + idx);
		idx += tmp;	//����� �̵�
		if (tmp > 0)	idx--;	//�������� �̵��Ѵٸ� ��ĭ�� ���������� �޶��� ũ�� ���(������ ��������)
		if (idx < 0)	idx = n + idx % n;	//idx������� ��ⷯ�� 2�� �������
		idx %= n;
	}
}