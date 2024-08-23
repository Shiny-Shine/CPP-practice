//공용체(p175_union.c)
#include<stdio.h>

int main(void){
	union ip_addr{
		unsigned int addr;
		unsigned char saddr[4];
	} ip;
	
	ip.addr = 0x01020304;	//little endial 방식으로 저장
							//하위 바이트부터 주소가 증가하는 방향으로 저장
	printf("%d.%d.%d.%d\n", ip.saddr[0], ip.saddr[1], ip.saddr[2], ip.saddr[3]);
	
	return 0;
}
