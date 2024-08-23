//사주 보기(p97_destiny) 
#include<stdio.h>
main() {
	int year, month, day, res;
	printf("당신의 사주를 봐드립니다.\n연도, 월, 일을 차례대로 입력하세요 : ");
	scanf("%d %d %d", &year, &month, &day, &res);
	res=(year-month+day)%10; //res를 10으로 나눠 1의 자리 숫자만 남긴다. 
	if(res==0)
		printf("당신의 사주는 대박입니다");
	else
		printf("당신의 사주는 그럭저럭입니다\n"); 
		//x%n = 0~(n-1) x를 n으로 나누면 0~(n-1)의 값이 나온다 EX) x%2 = 0,1(짝수 구하기) 
} 


