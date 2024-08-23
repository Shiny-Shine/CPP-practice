//문자열 입출력(p129_string2) 
#include<stdio.h>
main() {
	system("color 7a");
	char str[20];
	
	printf("소속 학교를 입력하세요 => ");
	gets(str);
	
	printf("우리 학교");
	puts(str);		//문자열 전용
} 
