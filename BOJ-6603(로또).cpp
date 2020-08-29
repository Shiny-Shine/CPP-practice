// 2020-08-29 BOJ-6603(로또)
// 선생님...설마 코드에 "5중 포문"을 넣으신겁까?
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int k = -1;
	while (k != 0)
	{
		cin >> k;
		vector<int> arr(k);
		for (int i = 0; i < k; i++)
			cin >> arr[i];

		for (int first = 0; first < k - 5; first++)
		{
			for (int second = first + 1; second < k - 4; second++)
			{
				for (int third = second + 1; third < k - 3; third++)
				{
					for (int forth = third + 1; forth < k - 2; forth++)
					{
						for (int fifth = forth + 1; fifth < k - 1; fifth++)
						{
							for (int sixth = fifth + 1; sixth < k; sixth++)
							{
								cout << arr[first] << ' ' << arr[second] << ' ' << arr[third] << ' ';
								cout << arr[forth] << ' ' << arr[fifth] << ' ' << arr[sixth] << '\n';
							}
						}
					}
				}
			}
		}
		cout << '\n';
	}
}
