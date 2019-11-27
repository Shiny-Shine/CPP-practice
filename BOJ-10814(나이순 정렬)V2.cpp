//2019-11-27 BOJ-10814(���̼� ����)V2
//����ü�� stable_sort�� Ȱ���� �ڵ带 �������ߴ�.
//sort�� �ٸ����� cmp�Լ��� ���� ���� ���� �����Ѵ�.
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Person
{
	//�̸�, ���̰� ���� �������� �����Ǿ��� ����ü�� �Էµ����͸� ����.
	int age;
	string name;
};

/*	�Լ��� ���� ���� ���� ������ ���� �Լ� ���·� �����ߴ�.
bool cmp(const Person& a, const Person& b)
{
	return a.age < b.age;
}
*/

int main()
{
	int n;
	cin >> n;

	vector<Person> a(n);	//����ü �迭.
	for (int i = 0; i < n; i++)	cin >> a[i].age >> a[i].name;

	stable_sort(a.begin(), a.end(), [](Person a, Person b) {
		return a.age < b.age;
	});	//�����Լ� ���·� �ٷ� �Լ������͸� ����� ���ڰ����� ����.

	for (int i = 0; i < n; i++)	cout << a[i].age << ' ' << a[i].name << '\n';
}