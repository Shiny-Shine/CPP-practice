//2019-11-25 BOJ-10825(국영수)
//다소 어렵다. 처음에 tuple로 했다가 질문글을 보고 구조체로 바꿨다.
//정렬함수를 짤때 처음에 if문이 상당이 더러웠는데 질문글 보고 깔끔해졌다.
//구조체 배열을 여러 기준으로 정렬하는 문제.
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
	student *s = new student[n];	//구조체 동적 할당.

	for (int i = 0; i < n; i++)
	{
		cin >> s[i].name >> s[i].ko >> s[i].en >> s[i].mat;
	}
	sort(s, s + n, sortby1234);

	for (int i = 0; i < n; i++)
		cout << s[i].name << '\n';

	delete []s;
}