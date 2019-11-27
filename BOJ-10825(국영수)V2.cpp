//2019-11-27 BOJ-10825(������)V2
//tuple�� ����ϸ� pair�� ���������� sort�Լ� ���� ���� �����͸�
//���������� �������� ���Ľ�Ų��, ���� ������ �ٲ������ ������������ �ٲ� �� �ִ�.
//�Է� �����͸� ó���ؼ� 'tuple'������ȭ ��Ų �� ����.
//���� �Ҷ��� tuple�� ��� ��� ó���Ѵ�.
#include <iostream>
#include <vector>
#include <tuple>
#include <string>
#include <algorithm>
using namespace std;

struct Person
{
	string name;
	int ko, en, mat;
};

bool cmp(const Person& a, const Person& b)
{		//����ü�� Ʃ���� �ƴ����� ������ ���� ��� Ʃ�÷� ���� ó��.
	return make_tuple(-a.ko, a.en, -a.mat, a.name) <
		make_tuple(-b.ko, b.en, -b.mat, b.name);
}			//int���� ������ �Ѱ��ָ� ���������� �ȴ�.

int main()
{
	int n;
	cin >> n;

	vector<Person> a(n);

	for (int i = 0; i < n; i++)	cin >> a[i].name >> a[i].ko >> a[i].en >> a[i].mat;

	sort(a.begin(), a.end(), cmp);

	for (int i = 0; i < n; i++)	cout << a[i].name << '\n';
}