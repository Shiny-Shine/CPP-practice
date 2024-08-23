//날짜 / 시간 함수 (p202_time2.c)
#include<stdio.h>
#include<time.h>
int main(void){
	time_t timer;	//시간을 나타내기 위한 자료형으로 time.h에서 선언됨
	struct tm *t;
	char *day[7] = {"일","월","화","수","목","금","토"};
	
	timer = time(NULL);		//현재 시간을 초단위로 얻기
	t = localtime(&timer);	//초 단위의 시간을 분리하여 구조체에 넣기
	
	printf("Unix Time : %d초 \n\n", timer);
	//1970.1.1 00:00:00부터의 경과 시간을 초로 환산하여 정수로 표시
	
	printf("%d년 ", t->tm_year + 1900);
	printf("%d월 ", t->tm_mon + 1);
	printf("%d일 ", t->tm_mday);
	printf("%s요일 ", day[t->tm_wday]);
	
	printf("%d시 ", t->tm_hour);
	printf("%d분 ", t->tm_min);
	printf("%d초 \n\n", t->tm_sec);
	
	printf("오늘은 올해의 %3d번째 날입니다\n", t->tm_yday);
	printf("섬머타임 적용 여부 : %d\n", t->tm_isdst);
}
