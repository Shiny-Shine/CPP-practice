//파일 입출력 (p186_append.c)
#include<stdio.h>
int main(void){
	FILE *fp;
	char st[50];
	
	printf("파일에 추가할 문자열을 입력하세요 => ");
	gets(st); 
	fp = fopen("d:/temp/out.txt", "a");
	fputs(st, fp);
	fclose(fp);
	printf("자료파일에 문자열이 추가되었습니다.");
	
	return 0; 
} 
