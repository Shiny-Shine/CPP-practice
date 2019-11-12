//2019-11-12 STL sort
using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>

bool cmp(int& L, int& R) {
	//sort �Լ� 3��° cmp �Լ� ���ڸ� ����� �������� �ִ�.
	return L > R;
}

int main(void) {
	//stable_sort�� ���� ���� ���� �ڸ��� ������Ű�� ������ ������ ��
	vector<int> a = { 5, 3 ,2 ,1 ,4 };
	for (int x : a)	cout << x << ' ';
	cout << '\n';

	sort(a.begin(), a.end());	//3��° ���ڰ� ������ �⺻ ��������
	for (int x : a)	cout << x << ' ';
	cout << '\n';

	a = { 5, 3 ,2 ,1 ,4 };
	for (int x : a)	cout << x << ' ';
	cout << '\n';

	sort(a.begin(), a.end(), greater<int>());	//�� ���� �������� ���
	sort(a.begin(), a.end(), cmp);
	sort(a.begin(), a.end(), [](int L, int R) {
		return L > R;
	});
	for (int x : a)	cout << x << ' ';
	cout << '\n';
}