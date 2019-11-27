//2019-11-27 BOJ-11656(���̻� �迭)V2
//substr�� ���� ���ϴ� string���� ���� ���ϴ� �κ��� �߶�´�.
//strcmp�� �ּ� str1�� �ּ� str2���� �ѹ���Ʈ�� ���س�����
//����(������ str1�� ����), 0(���� ���ڿ�), ���(������ str2�� ����.) �� �����Ѵ�.
//c_str�� c++ string�� char*�� �ٲ� �ش� (strcmp �� C ���̺귯���� ������ c������ char *�� �䱸�Ѵ�).
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int n = s.size();
	vector<int> a;

	for (int i = 0; i < n; i++)	a.push_back(i);	//substr�� ���� �ε��� ����.

	sort(a.begin(), a.end(), [&s](int L, int R) {
		return strcmp(s.c_str() + L, s.c_str() + R) < 0;
		//s.c_str() + L�� s + L ��° ���ں��� �������� �ǹ�.
		//��Ʈ ������ L, R ��ġ������ ���ڿ��� ���� ������ ������ L�� �����̹Ƿ� ��(�ȹٲ�).
		//����� (������ R�̸���) L, R�� ���� �ٲ�.
		//�� �����Լ��� ���� vector a�� ������ ���ĵ�(���� �ε���.)
	});

	//���� �ε��� ���� ������ �߶�ͼ� ���.
	for (int x : a)	cout << s.substr(x) << '\n';
}