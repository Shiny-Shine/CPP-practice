//파일 입출력 (p185_read1.c)
#include<stdio.h>
int main(void){
	FILE *fp;
	char st[50];
	
	printf("파일로부터 받은 문자열 => ");
	fp = fopen("out.txt", "r");
	fscanf(fp, "%s", st);
	fclose(fp);
	puts(st);
} 
