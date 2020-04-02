/*
	2020-04-02 C++ Gomoku �ؼ�

	�� ����ü Logic
	��� �Լ�(�޼ҵ�)�� ��ü �ܺο��� ����ü ������ ����, �� �����͵��� �����ϴ� �뵵�� ���� ���ȴ�.
	�޼ҵ带 ����Ư�� ���� �ù����� �Ű� ���� �����ϰ� �� �Ű� ���ڸ� ����
	����ü ���� �����͵��� �����ϴ� ������ ���̴�.
	������ �迭�� �����Ҵ��ϱ� ���� int** dat ������ ���� �߿��� �����Ͱ� �ȴ�.
	'Logic'�̶�� ����ü������ "������ ������ ���� �޼ҵ常 ����" �Ѵ�. ����, ������ �迭�� ����
	�޸𸮻� ���� ������ �� ����ü���� �̷���� ���̰�, �迭���� ���� ������ �� ����ü�� �߿� ���� �� �ϳ��̴�.

	�� ����ü Render
	'render'�� 'ǥ���ϴ�'��� ������ �ǹ̸� ������ �ִ�. ������(rendering)�̶�� ���� �������ٵ�,
	�������� ������ �����(drawing)�� ���̴�. �����ʹ� ���ڿ� �Ұ��ϴ�.
	�̸� ���ǹ��� ������ ���·� ǥ���ϴ� ���� �ֵ� ����̴�. ��, "�����Ϳ� ���� ������ ����".
	�� Logic vs Render
	'Logic'�� 'Render'�� �и����� ���� ������ ���������̴�.
	Logic ����ü���� ������ ������, �޼ҵ� ���� ���(c, java ��)�� �ټ� ���������� �ս��� ��ȯ��ų �� �ִ�.
	���� �˰������� ó���ϸ� �Ǳ� ������ �������� �κи� ����ϸ� ���� ��ȯ�� �����ϴ�.
	������ Logic ��Ʈ������ ������ ������ �Ѵ�. ��, ���ڿ� ���� ������ �̷������ �� ���ڵ���
	� �ǹ̸� ���������� �Ű澵 �ʿ� ����. Logic���� ������ �迭 ��Ұ����� 1���Ҵ��ϰ�,
	�ٸ� ��ҿ� 2�� �Ҵ��ߴ� ġ�� Logic������ 1�� 2�� ��ǹ������� ������ �ʿ䰡 ����.
	�� ���鿡 �ǹ̸� �ο��ϰ� �� ���� �������� ǥ���ϴ� ���� Render�̴�.
	������ ����� �ܼ�, ����Ƽ, �𸮾�, ������ â �� � �� ������ Logic�� ������ �ȹٲ�ٴ� ���� �߿��� ����Ʈ��.
*/

#include <iostream>
#include <cstdlib>
#define LEN 19
using namespace std;

struct Logic
{
	// �� int** dat;
	// Logic ����ü������ �������� ������ ����� �ش� ���������� ������ ������ �� �����̱⿡
	// 2���� �迭�� ������ ���� �Ҵ��ϰ� �޸��� �ּҸ� �޾Ƶд�

	int** dat = nullptr;		// 2���� �迭�� ���� �ּҸ� ����ų ������ ����
	int size = LEN;	// �������� ������
	int turn = 0;	// �鵹, �浹 ���ʸ� ��Ÿ��

	void makeData();			// 2���� �迭�� ���� ���� �Ҵ��Ѵ�
	void deleteData();			// ���޸𸮿� ������Ų ������ �����Ŵ
	bool putStone(int, int);	// Ư�� ��ġ�� ���� '1', '2'�� �����Ų��
	bool check(int, int);		// Ư�� ��ġ���� ����, ����, �밢�� �����͸� Ž���Ѵ�
	void add(int, int&, int&);	// Ž���� į�� Ŀ���� ��ġ�� �̵���Ŵ
};

void Logic::makeData()
{
	// 2���� �迭�� �޸� ������ ���� �Ҵ��Ѵ�.
	dat = (int**)malloc(sizeof(int) * size);
	dat[0] = (int*)malloc(sizeof(int) * size * size);
	for (int i = 1; i < size; i++)	dat[i] = dat[i - 1] + size;	//�����Ϳ���

	// ��� ������ ���� 0���� �ʱ�ȭ
	memset(dat[0], 0, sizeof(int) * size * size);
}

void Logic::deleteData()
{
	free(dat[0]);	// �����Ҵ�� 1�� �ּҰ��� ����
	free(dat);		// �����Ҵ�� 2�� �ּҰ� ����
}

bool Logic::putStone(int r, int c)
{
	if (dat[r][c] > 0)	return false;	//�̹� �����Ͱ� �մ� ���¸� ���

	dat[r][c] = turn + 1;	// �迭���� 1�Ǵ� 2�� ����
	if (check(r, c))	return true;

	turn = 1 - turn;		// �� ����
	return false;
	// �� �Լ��� ��ȯ���� true �� ������ �����Ų��
}

void Logic::add(int type, int& r, int& c)	// �����Ű�����(&)�� �Լ� �ܺ��� �������� �����ϰڴٴ� �ǹ�
{
	switch (type)
	{
	case 0:	// horizontal, ����. �� ����
		c++; break;

	case 1:	// vertical, ����. �� ����
		r++; break;

	case 2:	// horizontal, ���� �밢. ��, �� ����
		r++; c++; break;

	case 3:	// horizontal, ��� �밢. �� ����, �� ����
		r--;  c++; break;
	}
}

#define MIN(X,Y) (((X) < (Y)) ? (X) : (Y))	//��ũ�� �Լ� ����

bool Logic::check(int pr, int pc)			// (pr, pc) : ��ǥ ����
{
	int cnt = 0, current = 0;
	int r, c;

	// check horizontal, ���� üũ
	for (c = 0; c < size; add(0, pr, c))	// (pr, 0) : ��ǥ���� ���� ���� ��
	{
		if (dat[pr][c] == 0 || current != dat[pr][c]) { current = dat[pr][c]; cnt = 1; }
		else cnt++;
		if (cnt == 5)	return true;
	}

	// check vertical, ���� üũ
	cnt = 0;
	for (r = 0; r < size; add(1, r, pc))	// (0, pc) : ��ǥ���� ���� ���� ��
	{
		if (dat[r][pc] == 0 || current != dat[r][pc]) { current = dat[r][pc]; cnt = 1; }
		else cnt++;
		if (cnt == 5)	return true;
	}

	// check right-down, ���� �밢 üũ, �밢�� ���� ��ǥ���� ���� �� �� ��ǥ�� ã�´�.
	r = pr - MIN(pr, pc);
	c = pc - MIN(pr, pc);
	cnt = 0;
	for (; r < size && c < size; add(2, r, c))	// (r, c) : ��ǥ���� ���� �밢�� ù ��ġ���� ����
	{
		if (dat[r][c] == 0 || current != dat[r][c]) { current = dat[r][c]; cnt = 1; }
		else cnt++;
		if (cnt == 5)	return true;
	}

	// check right-up, ��� �밢 üũ, �밢�� ���� ��ǥ���� ��� �� �Ʒ� ��ǥ�� ã�´�.
	r = pr + MIN(size - 1 - pr, pc);
	c = pc - MIN(size - 1 - pr, pc);
	cnt = 0;
	for (; r >= 0 && c < size; add(3, r, c))	// (r, c) : ��ǥ���� ��� �밢�� ù ��ġ���� ����
	{
		if (dat[r][c] == 0 || current != dat[r][c]) { current = dat[r][c]; cnt = 1; }
		else cnt++;
		if (cnt == 5)	return true;
	}

	return false;
}

struct Render
{
	/*
		�� int** dat;
		Render ����ü������ 2���� �迭�� ������ �ּҰ��� �ſ� �߿��ϴ�.
		�ܼ��� ���ڷθ� ������ ������ ���� �ǹ̸� �ο��ϰ� ��� ���� ���� �ð�ȭ �۾��� ����Ǿ� �ϱ� ����.
		�� �� �߿��� �κ��� dat �ּҰ������� �������� ������ �� ����ü�� ���� �ƴϴ�.
		������ "'�б�'�� ������ ����" �����ϴ� ���� ���� �ٶ����� ������ �� �ϴ�.
		�׷��� �����͸� �б� ���ؼ��� �����Ͱ� �ִ� ��ġ���� Render ����ü�� ��� ������ dat��
		�Ҵ�Ǿ� �־�� �Ѵ�. �� ������ ��� �Լ��� setData�� ������ �����̴�.
		�����Ͱ� �ִ� ���� �ּҸ� �����ϴ� ���̴�.
	*/
	int** dat = nullptr;	//�����Ͱ� �ִ� �ּ�
	int size = LEN;

	void setData(int**);		// ����Ŀ�� �ִ� �ּҸ� ��� ������ ����(Logic.dat -> Render.dat)
	void printTop();			// ��� �ٵ��� ������ �׸�
	void printMid(int);			// �߰�
	void printBtm();			// �ϴ�
	void printBoard();			// ��ü �ٵ����� �׸�
	void printTopPosInfo();		// �ٵ��� �Է��� ���� ��� UI�� �׸�(��ǥ)
	string getString(string, int, int);	// Ư�� ��ġ���� �ٵ��� ���� �׸��� �ٵϾ��� �׸��� ����
	int getIndex(char);			// ��ġ������ �Էµ� ���ڿ��� �ϳ��ϳ� �м��ؼ� 2���� �迭�� �ε����� ã�´�
};

void Render::setData(int** p)
{
	dat = p;	// �Ű� ���ڷ� �־��� �ּҷ� ������� dat�� ����
}

void Render::printBoard()
{
	printTopPosInfo();	// ��� UI �׸���
	printTop();			// ��� �ٵ��� �׸���
	for (int i = 0; i < size - 2; i++)	printMid(i + 1);// �߰� �ٵ��ǵ� �׸���
	printBtm();			// �ϴ� �ٵ��� �׸���
}

void Render::printTop()
{
	cout << getString("��", 0, 0);	// �»�� �� �𼭸�, (0,0)������ ����.
	// (0, i + 1)������ ����
	for (int i = 0; i < size - 2; i++)	cout << getString("��", 0, i + 1);
	cout << getString("��", 0, LEN - 1) << "0\n";	// (0,15) ������ ����
}

void Render::printMid(int line)
{
	cout << getString("��", line, 0);
	for (int i = 0; i < size - 2; i++)	cout << getString("��", line, i + 1);
	cout << getString("��", line, LEN - 1);
	// ������ UI ���
	if (line <= 9)	cout << line << '\n';
	else cout << (char)('a' + line - 10) << '\n';
}

void Render::printBtm()
{
	cout << getString("��", LEN - 1, 0);
	for (int i = 0; i < size - 2; i++)	cout << getString("��", LEN - 1, i + 1);
	cout << getString("��", LEN - 1, LEN - 1);
	cout << (char)('a' + LEN - 1 - 10) << '\n';
}

void Render::printTopPosInfo()
{
	cout << "0 1 2 3 4 5 6 7 8 9 a b c d e f\n";
}

string Render::getString(string str, int r, int c)
{
	/*
		Render ����ü ���忡���� ������ �������� �� �Լ��� �ٽ��̴�.
		����� �����͸� �о ������ ���� ���� ������ ����� �����ϰ� �ִ�.
		������ ��ġ(r,c)������ �����͸� Ȯ���ϰ�
		�����Ͱ� 0�̸� �־��� �� ���ڿ�, str�� ��½�Ű��,
		�����Ͱ� 1�Ǵ� 2��� �ٵϵ��� ��½�Ų��
	*/
	if (dat[r][c] == 0)	return str;
	else if (dat[r][c] == 1)	return "��";
	else return "��";
}

int Render::getIndex(char c)
{
	// "Input Position : "���� �Է¹��� ���ڸ� Logic ������ ������ ���� �迭�� �ε����� ��ȯ.
	if ('0' <= c && c <= '9')	return c - '0';
	else return c - 'a' + 10;
}

int main()
{
	char pos[10];	// ����� �Է¹��� ���ڿ� ����

	Logic lg;		// Logic ����ü ���� ����
	lg.makeData();	// 2���� �迭�� ���� ��� ���� dat�� ����

	Render rd;		// Render ����ü ��������
	rd.setData(lg.dat);	// Logic���� ���� 2���� �迭 ������ �ּҸ� Render�� dat�� ����

	bool bGameOver = false;
	while (1)
	{
		system("cls");		// �ܼ� Ŭ����
		rd.printBoard();	// �ٵ��� ���
		if (bGameOver)		// ���� ���� üũ
		{
			cout << "Game Over\n";
			break;
		}

		cout << "Input Position : ";
		cin >> pos;	// ��ġ �Է�
		if (strcmp(pos, "gg") == 0)	break;	// �߰� Ż�� �� gg �̿�

		// �Է��� ���ڿ��� �м��� Logic���� �����͸� ����, �м��� ����� �޾Ƶ�
		bGameOver = lg.putStone(rd.getIndex(pos[0]), rd.getIndex(pos[1]));
	}
	lg.deleteData();	// �����Ҵ� ����
}