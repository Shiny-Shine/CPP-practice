//교과서 141쪽 말하는 앵무새(p141_code)
#include<stdio.h>
main(){
	char str[101];
	int i;
	
	gets(str);
	for(i=strlen(str)-1; i>=0; i--)
		printf("%c", str[i]);
} 
