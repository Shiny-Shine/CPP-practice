//2019-11-22 BOJ-1158(�����۽� ����)
//ǳ�� �Ͷ߸��� ������ ����� list ����, �ٸ� �̹����� list�� ����.
//����Ҷ� �߸ŷ� \b�� �ߴµ� �̰Ŷ����� ó���� Ʋ�ȴ�.
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
		
		it = joseph.erase(it);	//�̷��� ��� it�� �Ⱦ�����
		if(it == joseph.end()) it = joseph.begin();
		while (--step)
		{
			it++;
			if(it == joseph.end()) it = joseph.begin();
		}
	}
}