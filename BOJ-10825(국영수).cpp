//2019-11-25 BOJ-10825(������)
//�ټ� ��ƴ�. ó���� tuple�� �ߴٰ� �������� ���� ����ü�� �ٲ��.
//�����Լ��� ©�� ó���� if���� ����� �������µ� ������ ���� ���������.
//����ü �迭�� ���� �������� �����ϴ� ����.
#include <iostream>
#include <vector>
#include <tuple>
#include <string>
#include <algorithm>
using namespace std;

typedef struct student {
	string name;
	int ko;
	int en;
	int mat;
}student;

bool sortby1234(const student& a, const student& b)
{
	if (a.ko != b.ko)
		return a.ko > b.ko;
	else if (a.en != b.en)
		return a.en < b.en;
	else if (a.mat != b.mat)
		return a.mat > b.mat;
	else
		return a.name < b.name;
}

int main()
{
	int n;
	cin >> n;
	student *s = new student[n];	//����ü ���� �Ҵ�.

	for (int i = 0; i < n; i++)
	{
		cin >> s[i].name >> s[i].ko >> s[i].en >> s[i].mat;
	}
	sort(s, s + n, sortby1234);

	for (int i = 0; i < n; i++)
		cout << s[i].name << '\n';

	delete []s;
}