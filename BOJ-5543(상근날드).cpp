/*
	2019-12-19 BOJ-5543(상근날드)

	C++로 재구현했다, 빨라서 좋다.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int b1, b2, b3, coke, sodaPop;
	cin >> b1 >> b2 >> b3 >> coke >> sodaPop;
	int cheapBerger = min({ b1, b2, b3 });
	int cheapBeverage = min({ coke, sodaPop });
	cout << cheapBerger + cheapBeverage - 50;
}
