//문자열 검색(p137_str_research2)
#include<stdio.h>
#include<string.h>
main(){
	int i, j, n1, n2, pos, flag=0, sum=0;	//n1, n2는 두 문자열의 길이
	char st1[20], st2[10];	//기본 문자열과 검색할 문자열
	
	printf("*** 문자열 검색 ***\n\n");
	printf("기본 문자열 => ");
	gets(st1);
	printf("검색할 문자열 => ");
	gets(st2);
	
	n1=strlen(st1);
	n2=strlen(st2);
	
	for(i=0; i<n1-n2+1; i++){
		pos=i;
		for(j=0; j<n2; j++)
			if(st1[pos] != st2[j])	break;
			else pos++;
		if(j==n2) {
			sum++;
			flag=1;
		}
	}
	if(flag==0)	printf("\n기본 문자열에 \"%s\"(이)가 포함되지 않았습니다.\n", st2);
	if(flag==1)	printf("\n기본 문자열에 \"%s\"(이)가 %d 번 포함되었습니다.\n", st2, sum);
}
