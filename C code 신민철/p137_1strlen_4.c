//문자열의 길이(p137_1strlen_4)
//string copy
#include<stdio.h>
int main(){
	char pt[20], pt2[20];
	
	printf("*** 문자열의 복사 ***\n\n");
	
	printf("원본 => ");
	gets(pt);
	strcpy(pt2,pt);
	printf("사본 => %s", pt2); 
}
