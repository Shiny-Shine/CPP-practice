using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>

//�����ε�: ���� Ŭ�������� �Լ��� ������ �����ϴ°�.�ñ׳�ósignature�� �޶�����.
//�������̵� : ��ӹ��� Ŭ�������� �Լ��� ������ �ϴ� ��.�ñ׳�ósignature�� �����ϴ�.

int main() {
	vector<int>v = { 2, 2, 5, 4, 3, 2, 4, 3, 1, 2 ,6 };

	//find �� v.begin ���� end���� �� i�� iterator�� ��ȯ�Ѵ�, �� ã���� end()�� �����Ѵ�
	for (int i = 1; i <= 7; i++) {
		auto it = find(v.begin(), v.end(), i);
		cout << i << "'s position : ";
		
		if (it == v.end()) {
			cout << "not found";
		}
		else {
			cout << (it - v.begin()) << '\n';
			//���� ���� �ʿ�!
			//���� �迭���� ���� ���� �ݺ��ڳ����� ������ �����ϴ�.
			//�� �ݺ��� ���̿� �ִ� ��ҵ��� ���� ũ��� �� �����Ƿ� ���� ����� �������� ��� ������ ��Ÿ���� �������̴�.
		}
	}
}