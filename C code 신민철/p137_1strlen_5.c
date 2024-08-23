//문자열의 길이(p137_1strlen_5)
//string length
#include<stdio.h>
int main(){
	int i=0, p=0;
	char pt[20], pt2[20], pt3[40];
	
	printf("*** 문자열의 연결 ***\n\n");
	
	printf("원본 => ");
	gets(pt);
	
	printf("추가 => "); 
	gets(pt2);
	
	strcat(pt,pt2);
	printf("전체 => %s", pt);
}
