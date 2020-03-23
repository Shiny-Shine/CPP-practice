/*
	2020-03-23 C++ Practice

	Reference(ÂüÁ¶ÀÚ, &) 2

*/

#include <iostream>
using namespace std;

void SwapByRef(int& ref1, int& ref2)
{
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}

int main(void)
{
	int val1 = 10, val2 = 20;

	cout << "---Before Swapping---\n";
	cout << "val1 : " << val1 << ", val2 : " << val2 << '\n';

	SwapByRef(val1, val2);

	cout << "---After Swapping---\n";
	cout << "val1 : " << val1 << ", val2 : " << val2 << '\n';
}