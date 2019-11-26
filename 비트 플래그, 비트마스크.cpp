//2019-11-24	��Ʈ �÷���, ��Ʈ ����ũ ����
#include <iostream>
#include <bitset>

using namespace std;

int main(void)
{
	const unsigned char opt0 = 1 << 0;	//1�� 0�� ����Ʈ
	const unsigned char opt1 = 1 << 1;
	const unsigned char opt2 = 1 << 2;
	const unsigned char opt3 = 1 << 3;

	cout << bitset<8>(opt0) << '\n';
	cout << bitset<8>(opt1) << '\n';
	cout << bitset<8>(opt2) << '\n';
	cout << bitset<8>(opt3) << '\n';

	unsigned char items_flag = 0;
	cout << "�����! " << bitset<8>(items_flag) << '\n';

	//item0 on
	items_flag |= opt0;	//bitwise or
	cout << "item0 on " << bitset<8>(items_flag) << '\n';

	//item3 on
	items_flag |= opt3;	//bitwise or
	cout << "item3 on " << bitset<8>(items_flag) << '\n';

	//item3 lost
	items_flag &= ~opt3;	//bitwise or
	cout << "item3 lost " << bitset<8>(items_flag) << '\n';

	//has item1??
	if (items_flag & opt1)	//AND������ opt1�� ��Ʈ�� 1�̸� true�� ����
	{
		cout << "1�� �־��!\n";
	}
	else cout << "1�� �����!\n";

	//has item0??
	if (items_flag & opt0)
	{
		cout << "0�� �־��!\n";
	}
	else cout << "0�� �����!\n";

	//obtain(���) item 2, 3
	items_flag |= (opt2 | opt3);

	cout << bitset<8>(opt2 | opt3) << '\n';
	cout << "item2, 3 obtained " << bitset<8>(items_flag) << '\n';

	if ((items_flag & opt2) && !(items_flag & opt1))	//item 2 on & item 1 NO
	{
		items_flag ^= (opt1 | opt2);	//XOR����, ��Ʈ ���¸� �ٲ���, ������ 2����� 1 ������. 
	}
	cout << bitset<8>(items_flag) << '\n';
}