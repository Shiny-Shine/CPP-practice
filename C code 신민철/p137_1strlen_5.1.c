//문자열의 길이(p137_1strlen_5.1)
//string length
#include<stdio.h>
int main(){
	int i=0, p=0;
	char pt[20], pt2[20], pt3[40];
	
	printf("*** 문자열의 연결 ***\n\n");
	
	printf("원본 => ");
	gets(pt);
	
	while(pt[i] != NULL){
		pt3[i]=pt[i];
		i++;
		if(pt[i]=='\0')	break;
		
	}
	
	printf("추가 => "); 
	gets(pt2);

	while(pt2[p] != NULL){
		pt3[i]=pt2[p];
		i++;
		p++;
		if(pt2[p]=='\0')	pt3[i]='\0';
		
	}
	printf("전체 => %s", pt3);
}
