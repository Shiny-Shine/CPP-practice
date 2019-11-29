//2019-11-29 BOJ-11005(진법 변환 2)
//10진수를 N진수로 출력하는 문제. N진수로 나누며 나눈 나머지를 배열에 모아준다,
//배열을 뒤집은 후에 숫자/문자 따라 나눠 변환을 해 준다.
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int num, notation;
	cin >> num >> notation;
	vector<int> v;

	while (num > 0)
	{
		v.push_back(num % notation);
		num /= notation;
	}
	//뒤집지 않으면 ex)123 > 321로 나옴.
	reverse(v.begin(), v.end());

	for (char i : v)
	{
		//9미만 숫자면 정수, 그이상은 변환해서 대문자 알파벳으로.
		if (i < 10)
			printf("%d", i);
		else
			printf("%c", i - 10 + 'A');
	}
}