/*
	2020-03-24 C++ Practice

	Reference(참조자, &) 3

	'AddValue' 함수를 호출하면 다음과 같이 진행된다.
	int & ref = v1;
	그리고 이 함수가 종료될 때 int& v2 = ref를 반환한다.
	
	결국은 하나의 공간에 대해 이름이 3개인 것이다.
	v1, ref, v2 모두 하나의 공간의 다른 이름이다.
*/

#include <iostream>
using namespace std;

int& AddValue(int& ref)
{
	ref += 10;
	return ref;
}

int main(void)
{
	int v1 = 10;
	int& v2 = AddValue(v1);
	cout << v1 << ',' << v2 << '\n';

	v1 += 10;
	v2 += 10;
	cout << v1 << ',' << v2 << '\n';
}