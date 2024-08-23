//문자열의 길이(p137_1strlen)
//string length
#include<stdio.h>
int main(){
	int i=0;
	char pt[20];
	
	printf("*** 문자열의 길이 ***\n\n");
		printf("문자열 => ");
	gets(pt);
	i=strlen(pt);		//string length
	printf("문자열의 길이 => %d 글자", i); 
}
