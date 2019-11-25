//2019-11-25 BOJ-10807(알파벳 개수)V2
//STL 함수들을 최대한 써야하는데 그렇지 못하고 배열로 풀어 다시 풀었다.
//string 컨테이너는 벡터로 만들어진 컨테이너란걸 알았다.
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string s;
	cin >> s;
	for (int i = 'a'; i <= 'z'; i++)	cout << count(s.begin(), s.end(), i) << ' ';
}