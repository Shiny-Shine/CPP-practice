//문자열의 길이(p137_1strlen_6)
//string length
#include<stdio.h>
int main(){
	int i, num=0;
	char st[20];
	
	printf("*** 문자열의 전환 ***\n\n");
	
	printf("숫자형 문자열 => ");
	gets(st);
	
	for(i=0; st[i]>='0' && st[i]<='9'; i++)
		num=num*10+(st[i]-'0');
	
	printf("정 수 => %d", num);
}
