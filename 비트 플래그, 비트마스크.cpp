//2019-11-24	비트 플래그, 비트 마스크 연습
#include <iostream>
#include <bitset>

using namespace std;

int main(void)
{
	const unsigned char opt0 = 1 << 0;	//1을 0번 쉬프트
	const unsigned char opt1 = 1 << 1;
	const unsigned char opt2 = 1 << 2;
	const unsigned char opt3 = 1 << 3;

	cout << bitset<8>(opt0) << '\n';
	cout << bitset<8>(opt1) << '\n';
	cout << bitset<8>(opt2) << '\n';
	cout << bitset<8>(opt3) << '\n';

	unsigned char items_flag = 0;
	cout << "읎어요! " << bitset<8>(items_flag) << '\n';

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
	if (items_flag & opt1)	//AND연산해 opt1의 비트가 1이면 true를 던짐
	{
		cout << "1번 있어요!\n";
	}
	else cout << "1번 읎어요!\n";

	//has item0??
	if (items_flag & opt0)
	{
		cout << "0번 있어요!\n";
	}
	else cout << "0번 읎어요!\n";

	//obtain(얻다) item 2, 3
	items_flag |= (opt2 | opt3);

	cout << bitset<8>(opt2 | opt3) << '\n';
	cout << "item2, 3 obtained " << bitset<8>(items_flag) << '\n';

	if ((items_flag & opt2) && !(items_flag & opt1))	//item 2 on & item 1 NO
	{
		items_flag ^= (opt1 | opt2);	//XOR연산, 비트 상태를 바꿔줌, 역으로 2지우고 1 생성함. 
	}
	cout << bitset<8>(items_flag) << '\n';
}