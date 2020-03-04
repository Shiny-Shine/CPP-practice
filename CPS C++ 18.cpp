// 2020-01-20 18(Ãþ°£¼ÒÀ½)
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
	int n, m, sec = 0, measure = 0, max = 0;
	cin >> n >> m;

	while (n--)
	{
		sec++;
		cin >> measure;

		if (measure <= m)	sec = 0;
		else if (sec > max)	max = sec;
	}
	cout << max;
}