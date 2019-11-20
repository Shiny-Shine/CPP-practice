//2019-11-20 BOJ-5397(키로거) 스택 재구현 버전
//스택으로 재구현하는 이유는 속도면에서 더 빠르고,
//중요한 자료구조인 스택을 사용하는 경험때문이라고 쌤은 말씀하셨다.
//List로 구현하면 276ms, Stack로 구현하면 132ms가 나온다.
#include <iostream>
#include <stack>
#include<cstring>	//memset 함수.
#define MAX_SIZE 1000010

using namespace std;

char s[MAX_SIZE];

int main()
{
	int n;
	cin >> n;	//TestCase

	while (n--)
	{
		memset(s, 0, MAX_SIZE);
		scanf("%s", s);

		//커서가 스택 2개 사이에 위치한다.
		//sl을 sr에 모두 밀어넣고 출력.
		//입력을 받으면서 커서 작업을 함.
		stack<char> sl, sr;
		int len = strlen(s);
		for (int i = 0; i < len; i++)
		{
			switch(s[i])
			{
			case '<':
				if (!sl.empty())	//비어있지 않으면
				{
					sr.push(sl.top());
					sl.pop();	//sl의 top값을 sr로 옮김으로써 커서 이동을 구현.
				}
				break;

			case '>':
				if (!sr.empty())	//위의 역순
				{
					sl.push(sr.top());
					sr.pop();
				}
				break;

			case '-':
				if (!sl.empty())	sl.pop();//커서의 왼쪽이 없어짐
				break;

			default:
				sl.push(s[i]);	//입력
				break;
			}

		}
		while (!sl.empty())	//밀어넣기
		{
			sr.push(sl.top());
			sl.pop();
		}

		while (!sr.empty())	//밀어넣기
		{
			printf("%c", sr.top());
			sr.pop();
		}
		printf("\n");
	}
}