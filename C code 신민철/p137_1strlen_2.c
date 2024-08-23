//문자열의 길이(p137_1strlen_2)
//string length
#include<stdio.h>
int main(){
	int i=0;
	char pt[20];
	
	printf("*** 문자열의 길이 ***\n\n");
		printf("문자열 => ");
	gets(pt);
	while(pt[i] != NULL)	i++;
	printf("문자열의 길이 => %d 글자", i); 
}
