//날짜 / 시간 함수 (p202_time1.c)
#include<stdio.h>
int main(void){
	long now;
	
	now = time(NULL);
	printf("total second since 1970.1.1 00:00:00 : %ld\n", now);
}
