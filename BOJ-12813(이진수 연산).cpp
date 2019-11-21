//2019-11-21 BOJ-12813(������ ����)
//��Ʈ���� ������ bitset�� �̿��ߴ�.
//���� ���ظ� �߸��ؼ� 3�и��� Ǯ����� 20�е��� �̻����� �ߴ�.
#include<iostream>
#include<bitset>
#include<vector>
#include<functional>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(NULL);

	bitset<100000> a, b;
	cin >> a >> b;

	cout << (a & b) << '\n';
	cout << (a | b) << '\n';
	cout << (a ^ b) << '\n';
	cout << ~a << '\n';
	cout << ~b << '\n';
}