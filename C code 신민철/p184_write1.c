//파일 입출력(p184_write2.c)
#include<stdio.h>
int main(void)
{
	FILE *fp;
	char st[50];
	
	printf("파일로 저장할 문자열을 입력하세요. => ");
	gets(st);
	fp = fopen("d:/temp/string.txt", "w");	//d:에 템프 플도가 잇어야함 "w"는 write 
	fputs(st, fp);							//fprintf 랑 같은 역할 
	fclose(fp);
	printf("자료파일 생성이 완료되었습니다"); 
	return 0; 
} 
