#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void reset(void);

int c_num;
int cnt = 5;

int main(void) {

	reset();

	int num;	//게임 종료/계속 확인용 변수

	while (1) {
		int c = 0;
		int play;
		while (cnt != 0) {
			c++;
			cnt--;
			printf("::%d 번째 도전!::\n::숫자를 찍어주세요! : ", c);
			scanf("%d", &play);

			if (play == c_num) {
				break;
			}
			else if (play < c_num) {
				printf("%d 는 너무 낮습니다!\n\n", play);
			}
			else printf("%d 는 너무 높습니다!\n\n", play);
		}

		if (cnt != 0) {
			printf("\n::축하합니다!::\n");
			printf("%d번 만에 숫자를 맟추셨습니다~!!\n", c);
			printf("'-1'을 누르면 게임이 종료됩니다!\n");
		}
		else {
			printf("실패!\n");
			printf("정답은 %d 였습니다!\n", c_num);
		}
		printf("\n게임을 계속하시려면 아무 키나 눌려주세요!\n");
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

	printf("-<:: 숫자 맟추기 찍신 게임 ::>-\n");
	printf("<1 ~ 100>중의 숫자중 컴퓨터가 정한 숫자를 맟춰보세요!\n'-1'을 누르면 종료합니다...\n\n");
}