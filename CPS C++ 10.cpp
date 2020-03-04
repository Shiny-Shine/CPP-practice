// 2020-01-20 10(자릿수의 합)
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int n, max = 0, midx;
	vector<string> nums;
	cin >> n;
	nums.resize(n);

	for (int i = 0; i < n; i++)
	{
		cin >> nums[i];
		int sum = 0;

		for (auto j : nums[i])
			sum += j - '0';
		
		if (sum > max)
		{
			max = sum;
			midx = i;
		}
		if (sum == max && nums[midx] < nums[i])
			midx = i;
	}
	cout << nums[midx];
		
}