/*
	2020-03-27 CPP Pointer 2

	�����ʹ� �ݵ�� �ڷ����� ������ �Ѵ�, �ڷ����� ������ �����ʹ�
	������ �� ������ �ؼ��� �� ����.
	����, �������� �ڷ����� �Ҵ�Ǵ� ���� �ڷ����� ��ġ�ؾ� �Ѵ�.
	�׷��� ������ �������� �� ��Ʈ�� �ٸ� �ڷ������� �߸� �ؼ��Ѵ�.
*/
#include <iostream>
using namespace std;

int main()
{
	// � ���� ����Ű�� ������ ������ �ִٸ�, ������ ������ (*) �� ����
	// �����Ͱ� ����Ƽ�� �ּ��� ���� �� �� �ִ�.
	int value = 5;
	cout << &value << '\n';	// value�� �ּ� ���
	cout << value << '\n';	// �� ���

	int* ptr = &value;
	cout << ptr << '\n';	// ptr�� ����Ű�� �ּ� ���(value)
	cout << *ptr << '\n';	// ptr�� �������Ѵ�(ptr�� ����Ű�� �ּ��� �� ��� == value)



	// �Ҵ��� �Ŀ� ������ ���� �ٸ������� ���Ҵ��� �� �ִ�.
	int value1 = 5;
	int value2 = 7;

	int* pt;

	pt = &value1;			// pt points to value1
	cout << *ptr << '\n';	// 5

	pt = &value2;			// pt points to value2
	cout << *ptr << '\n';	// 7

	// �Ϲ������� ������ ���̴�.
	// ptr == &value
	// *ptr = value
	
	// *ptr�� value�� ���� ��޵ǹǷ� ��ġ ����ó�� ���� �Ҵ��� �� �ִ�.
	value = 5;
	int* p = &value;

	*p = 7;
	cout << value << '\n';
}