//문자열의 길이(p137_1strlen_8)
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
	
	while(n1 != '\0'){
		if(n1[i] != n2[i]){
			printf("두 문자열이 동일하지 않습니다.");
			break; 
		}
		else if(n1[i] == n2[i]){
			printf("두 문자열이 동일합니다.");
			break; 
		}
		i++;
	}
}
