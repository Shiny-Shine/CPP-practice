//2019-11-21 BOJ-12813(이진수 연산)
//비트연산 가능한 bitset를 이용했다.
//문제 이해를 잘못해서 3분만에 풀어놓고 20분동안 이상한짓 했다.
#include<iostream>
#include<bitset>
#include<vector>
#include<functional>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(NULL);

	bitset<100000> a, b;
	cin >> a >> b;

	cout << (a & b) << '\n';
	cout << (a | b) << '\n';
	cout << (a ^ b) << '\n';
	cout << ~a << '\n';
	cout << ~b << '\n';
}