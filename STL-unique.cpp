//2019-11-11 STL unique1
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
//begin~end ���� ���ӵǴ� �� 1�� ���� ����, �����̳� ũ�� ���� X
//���� �����ų� ����Ʈ ��Ų��, ������end() ��ȯ(unique�� ���� �����Ⱚ�� ù��°)
int main(void) {
	vector<int> a = { 1, 1, 2, 2, 2 ,3, 1, 1 ,1 ,2, 2 ,2 ,2 };
	for (int x : a) cout << x << ' ';
	cout << '\n';

	auto last = unique(a.begin(), a.end());
	for (int x : a) cout << x << ' ';

	//�ߺ� ������ ���ʹ� 1,2,3,1,2�̰� end��ȯ�� last == 3.
	cout << '\n' <<  *last << '\n';

	//���� �����ų� ����Ʈ�� �߱� ������ last ���ķδ� ���� ���� �״�� �����ִ�.
	for (auto it = a.begin(); it != last; it++) {
		cout << *it << ' ';
	}cout << '\n';
}