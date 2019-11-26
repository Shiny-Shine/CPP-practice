//2019-11-24 비트 마스크
#include <iostream>
#include <bitset>
using namespace std;

int main()
{
	const unsigned int rmask = 0xFF0000;
	const unsigned int gmask = 0x00FF00;
	const unsigned int bmask = 0x0000FF;

	unsigned int pixel_color;
	cout << "16진수 RGB 값을 입력하세요\n";
	cin >> hex >>pixel_color;

	cout << bitset<24>(pixel_color) << '\n';

	unsigned char r = (pixel_color & rmask) >> 16;
	unsigned char g = (pixel_color & gmask) >> 8;
	unsigned char b = (pixel_color & bmask);

	cout << "red is " << bitset<8>(r)  << ' ' << (int)r << '\n';
	cout << "green is " << bitset<8>(g) << ' ' << (int)g << '\n';
	cout << "blue is " << bitset<8>(b) << ' ' << (int)b << '\n';

}