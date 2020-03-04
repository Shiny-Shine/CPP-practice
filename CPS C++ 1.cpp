#include <iostream>
using namespace std;

int main()
{
	int n, m, sum = 0;
	cin >> n >> m;

	for (int i = m; i <= n; i += m)
	{
		sum += i;
	}
	cout << sum;
}