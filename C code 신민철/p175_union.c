//����ü(p175_union.c)
#include<stdio.h>

int main(void){
	union ip_addr{
		unsigned int addr;
		unsigned char saddr[4];
	} ip;
	
	ip.addr = 0x01020304;	//little endial ������� ����
							//���� ����Ʈ���� �ּҰ� �����ϴ� �������� ����
	printf("%d.%d.%d.%d\n", ip.saddr[0], ip.saddr[1], ip.saddr[2], ip.saddr[3]);
	
	return 0;
}
