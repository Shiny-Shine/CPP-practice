//2019-11-27 BOJ-11656(접미사 배열)V2
//substr은 내가 원하는 string에서 내가 원하는 부분을 잘라온다.
//strcmp은 주소 str1과 주소 str2에서 한바이트씩 비교해나가며
//음수(사전상 str1이 먼저), 0(같은 문자열), 양수(사전상 str2가 먼저.) 를 리턴한다.
//c_str은 c++ string을 char*로 바꿔 준다 (strcmp 가 C 라이브러리기 때문에 c형식의 char *를 요구한다).
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int n = s.size();
	vector<int> a;

	for (int i = 0; i < n; i++)	a.push_back(i);	//substr할 시작 인덱스 모음.

	sort(a.begin(), a.end(), [&s](int L, int R) {
		return strcmp(s.c_str() + L, s.c_str() + R) < 0;
		//s.c_str() + L은 s + L 번째 글자부터 끝까지를 의미.
		//소트 도중의 L, R 위치에서의 문자열을 비교해 음수면 사전상 L이 먼저이므로 참(안바뀜).
		//양수면 (사전상 R이먼저) L, R의 순서 바뀜.
		//이 람다함수를 통해 vector a의 값들이 정렬됨(시작 인덱스.)
	});

	//시작 인덱스 부터 끝까지 잘라와서 출력.
	for (int x : a)	cout << s.substr(x) << '\n';
}