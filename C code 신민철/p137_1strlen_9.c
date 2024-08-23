//문자열의 길이(p137_1strlen_9)
//string length
#include<stdio.h>
int main(){
	int i=0;
	char n1[20], n2[20];
	
	printf("*** 문자열 비교 ***\n\n");
	
	printf("문자열 1 => ");
	gets(n1);
	
	printf("문자열 2 => ");
	gets(n2);
	
	i=strcmp(n1,n2);
	
	if(i==0)	printf("두 문자열이 동일합니다.");
	else if(i>0)	printf("\n첫 번재 문자열이 더 큽니다.\n");
	else	printf("\n 두 번째 문자열이 더 큽니다.\n."); 
	
}
