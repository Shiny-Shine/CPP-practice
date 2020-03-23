/*
	2020-03-23 C++ Practice

	Range-based-for
	
	무조건 전체 범위를 탐색하는 for-loop반복문이다.
	일반 for-loop에서는 조건영역이 있어 반복 범위를 조정할 수 있다.
	하지만, "Range-based-for"반복문은 반복 범위를 임의로 조정할 수 없다.
	데이터 콜렉션(배열 등)이 시작되는 주소값을 지정해 주면 해당 주소로 가서
	콜렉션으로 묶여 있는 '모든 데이터를 강제적으로 탐색한다' 배열 의 경우
	전체 데이터를 강제적으로 탐색하는 것이다.

	사용성이 매우 높다.
	Java에서는 그대로, C#에선 'foreach' 구문으로, Python 역시 약간의 문법변형으로 사용됨.

	auto 변수타입이 유용하게 사용됨.
*/

#include <iostream>
using namespace std;

int main()
{
	int aa[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 ,10 };
	int sum = 0;

	for (int x : aa)	// a 주소로 가서 모든 데이터를 하나씩 끄집어 내어 x 에 담으면서 전개된다.
	{
		cout << x << ',';
		sum += x;
	}
	cout << "\nsum = " << sum << '\n';

	cout << '\n';

	char a[] = "school";
	// a의 주소로 가면 다음 데이터가 있다.
	// ['s', 'c', 'h', 'o', 'o', 'l', '\0']
	char b[10] = "test";
	// b의 주소로 가면 다음 데이터가 있다.
	// ['t', 'e', 's', 't', 0 ,0 ,0 ,0 ,0 ,0]
	int c[5] = {};
	// c의 주소로 가면 다음 데이터가 있다.
	// [0, 0 ,0, 0, 0]

	int length = 0;
	for (auto x : a)	length++;
	cout << "length = " << length << '\n';

	length = 0;
	for (auto x : b)	length++;
	cout << "length = " << length << '\n';

	length = 0;
	for (auto x : c)	length++;
	cout << "length = " << length << '\n';
}