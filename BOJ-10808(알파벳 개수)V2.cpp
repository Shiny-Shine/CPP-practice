//2019-11-25 BOJ-10807(���ĺ� ����)V2
//STL �Լ����� �ִ��� ����ϴµ� �׷��� ���ϰ� �迭�� Ǯ�� �ٽ� Ǯ����.
//string �����̳ʴ� ���ͷ� ������� �����̳ʶ��� �˾Ҵ�.
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