//구구단 (P108b_gugudan) 
#include<stdio.h>
main(){
	int i, dan;
	char ch;
	
	printf("출력할 구구단은 몇단? =>  ");
	ch=getche();
	printf("\n\n=== *%c단* ===\n", ch);    //%c 이기 때문에 아스키로 저장된 숫자도 정수로 나옴  
	dan=ch-'0';        //아스키 코드를 정수로 변환 
	for(i=1; i<=9; i++)
		printf("%d X %d = %2d\n", dan, i, dan*i);
	
}
