//2019-11-29 BOJ-1373(2진수 8진수)
//처음에 단순히 진법 변환 문제의 코드만 수정했다가, 자리수에 압도당했다.
//int형으로는 절대 못풀고, 스택을 사용해서 한 자리씩 삽입/삭제 했다.
#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	string b;
	stack<int> o;	//Binary, octal number
	cin >> b;

	//string으로 이진수 받아 뒤집기.
	reverse(b.begin(), b.end());

	for (int i = 0; i < b.length(); i += 3)
	{
		//이진수를 3자리씩 끊어 가며 변환해 스택에 한자리씩 삽입.
		int sum = 0, num = 1;
		for (int j = 0; j < 3; j++)
		{
			if (b[i + j] == '1')	sum += num;
			num = num << 1;
		}
		o.push(sum);
	}
	while (!o.empty())
	{
		int a = o.top();
		cout << a;
		o.pop();
	}
}