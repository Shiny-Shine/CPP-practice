//2019-11-27 BOJ-10814(나이순 정렬)V2
//구조체와 stable_sort를 활용해 코드를 재정렬했다.
//sort와 다른점은 cmp함수를 값이 같을 때만 실행한다.
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Person
{
	//이름, 나이가 서로 묶여져서 관리되야해 구조체로 입력데이터를 관리.
	int age;
	string name;
};

/*	함수를 직접 만들 수도 있지만 람다 함수 형태로 구성했다.
bool cmp(const Person& a, const Person& b)
{
	return a.age < b.age;
}
*/

int main()
{
	int n;
	cin >> n;

	vector<Person> a(n);	//구조체 배열.
	for (int i = 0; i < n; i++)	cin >> a[i].age >> a[i].name;

	stable_sort(a.begin(), a.end(), [](Person a, Person b) {
		return a.age < b.age;
	});	//람다함수 형태로 바로 함수포인터를 만들어 인자값으로 지정.

	for (int i = 0; i < n; i++)	cout << a[i].age << ' ' << a[i].name << '\n';
}