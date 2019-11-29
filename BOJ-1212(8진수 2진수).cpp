//2019-11-29 BOJ-1212(8진수 2진수)
//스택으로 반대 상황과 비슷하게 풀었다, 하지만 로직이 많이 달라진다.
#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	string o;
	stack<int> b;	//Binary, octal number
	cin >> o;

	//0입력시.
	if (o.length() == 1 && o[0] == '0')
	{
		cout << 0;
		return 0;
	}

	//string으로 8진수 받아 뒤집기.
	reverse(o.begin(), o.end());

	//한자리를 이진수 세자리로 변환.
	for (char i : o)
	{
		int temp = i - '0';
		for (int i = 0; i < 3; i++)
		{
			b.push(temp % 2);
			temp /= 2;
		}
	}

	//맨앞 0 제거.
	int temp = b.top();
	while (temp == 0)
	{
		temp = b.top();
		if (temp == 0)	b.pop();
	}

	while (!b.empty())
	{
		int a = b.top();
		b.pop();
		cout << a;
	}
}