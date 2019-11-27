//2019-11-27 BOJ-10825(국영수)V2
//tuple을 사용하면 pair와 마찬가지로 sort함수 사용시 묶인 데이터를
//순차적으로 오름차순 정렬시킨다, 값을 음수로 바꿔버리면 내림차순으로 바꿀 수 있다.
//입력 데이터를 처리해서 'tuple'데이터화 시킨 후 정렬.
//정렬 할때만 tuple로 잠깐 묶어서 처리한다.
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
{		//구조체는 튜플이 아니지만 정렬할 때만 잠시 튜플로 묶어 처리.
	return make_tuple(-a.ko, a.en, -a.mat, a.name) <
		make_tuple(-b.ko, b.en, -b.mat, b.name);
}			//int값을 음수로 넘겨주면 내림차순이 된다.

int main()
{
	int n;
	cin >> n;

	vector<Person> a(n);

	for (int i = 0; i < n; i++)	cin >> a[i].name >> a[i].ko >> a[i].en >> a[i].mat;

	sort(a.begin(), a.end(), cmp);

	for (int i = 0; i < n; i++)	cout << a[i].name << '\n';
}