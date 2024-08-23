//문자열의 길이(p137_1strlen_7)
//string length
#include<stdio.h>
int main(){
	int i=0;
	char num[20];
	
	printf("*** 문자열의 전환 ***\n\n");
	
	printf("숫자형 문자열 => ");
	gets(num);
	
	printf("정수 => ");
	
	i=atoi(num);
	
	printf("%d", i); 
}
