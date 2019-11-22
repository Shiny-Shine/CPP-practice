//2019-11-22 BOJ-1158(조세퍼스 문제)
//풍선 터뜨리기 문제와 비슷한 list 문제, 다만 이문제는 list가 정석.
//출력할때 야매로 \b를 했는데 이거때문에 처음에 틀렸다.
#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> joseph;
	int n, k;
 	cin >> n >> k;

	for (int i = 0; i < n; i++)	joseph.push_back(i + 1);
	
	cout << '<';
	auto it = joseph.begin();
	for (int i = 0; i < k - 1; i++)
	{
		it++;
		if (it == joseph.end()) it = joseph.begin();
	}
	while(1)
	{
		int step = k;
		if (joseph.size() == 1)
		{
			cout << *it << '>' << '\n';
			break;
		}
		cout << *it << ',' << ' ';
		
		it = joseph.erase(it);	//이렇게 써야 it가 안없어짐
		if(it == joseph.end()) it = joseph.begin();
		while (--step)
		{
			it++;
			if(it == joseph.end()) it = joseph.begin();
		}
	}
}