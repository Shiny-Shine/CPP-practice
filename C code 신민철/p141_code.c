//������ 141�� ���ϴ� �޹���(p141_code)
#include<stdio.h>
main(){
	char str[101];
	int i;
	
	gets(str);
	for(i=strlen(str)-1; i>=0; i--)
		printf("%c", str[i]);
} 
