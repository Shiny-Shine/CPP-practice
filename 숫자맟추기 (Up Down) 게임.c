#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void reset(void);

int c_num;
int cnt = 5;

int main(void) {

	reset();

	int num;	//���� ����/��� Ȯ�ο� ����

	while (1) {
		int c = 0;
		int play;
		while (cnt != 0) {
			c++;
			cnt--;
			printf("::%d ��° ����!::\n::���ڸ� ����ּ���! : ", c);
			scanf("%d", &play);

			if (play == c_num) {
				break;
			}
			else if (play < c_num) {
				printf("%d �� �ʹ� �����ϴ�!\n\n", play);
			}
			else printf("%d �� �ʹ� �����ϴ�!\n\n", play);
		}

		if (cnt != 0) {
			printf("\n::�����մϴ�!::\n");
			printf("%d�� ���� ���ڸ� ���߼̽��ϴ�~!!\n", c);
			printf("'-1'�� ������ ������ ����˴ϴ�!\n");
		}
		else {
			printf("����!\n");
			printf("������ %d �����ϴ�!\n", c_num);
		}
		printf("\n������ ����Ͻ÷��� �ƹ� Ű�� �����ּ���!\n");
		scanf("%d", &num);

		if (num == -1)	return 0;
		else reset();
	}
}

void reset(void) {
	system("cls");
	cnt = 5;

	srand(time(NULL));

	c_num = rand() % 100 + 1;

	printf("-<:: ���� ���߱� ��� ���� ::>-\n");
	printf("<1 ~ 100>���� ������ ��ǻ�Ͱ� ���� ���ڸ� ���纸����!\n'-1'�� ������ �����մϴ�...\n\n");
}