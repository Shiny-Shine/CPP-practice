//��¥ / �ð� �Լ� (p202_time2.c)
#include<stdio.h>
#include<time.h>
int main(void){
	time_t timer;	//�ð��� ��Ÿ���� ���� �ڷ������� time.h���� �����
	struct tm *t;
	char *day[7] = {"��","��","ȭ","��","��","��","��"};
	
	timer = time(NULL);		//���� �ð��� �ʴ����� ���
	t = localtime(&timer);	//�� ������ �ð��� �и��Ͽ� ����ü�� �ֱ�
	
	printf("Unix Time : %d�� \n\n", timer);
	//1970.1.1 00:00:00������ ��� �ð��� �ʷ� ȯ���Ͽ� ������ ǥ��
	
	printf("%d�� ", t->tm_year + 1900);
	printf("%d�� ", t->tm_mon + 1);
	printf("%d�� ", t->tm_mday);
	printf("%s���� ", day[t->tm_wday]);
	
	printf("%d�� ", t->tm_hour);
	printf("%d�� ", t->tm_min);
	printf("%d�� \n\n", t->tm_sec);
	
	printf("������ ������ %3d��° ���Դϴ�\n", t->tm_yday);
	printf("����Ÿ�� ���� ���� : %d\n", t->tm_isdst);
}
