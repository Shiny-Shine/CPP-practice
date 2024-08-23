//구구단 (P108d_gugudan) 
#include<stdio.h>
main(){
	int i, dan;
	char ch, yes;
	do{
		system("cls"); 		//클리어 스크린! 
		do{
	printf("출력할 구구단은 몇단? =>  ");
	ch=getche();
	if(ch<'1' || ch>'9')    	//ch 가 1보다 작거나 9보다 크면 잘못 입력하엿습니다 출력 
		printf("잘못 입력하셧습니다. \n\n");
	}while(ch <'1' || ch>'9');				//ch가  1보다 작거나 9보다 크면 ch입력부터 다시 계속 반복  
	printf("\n\n=== *%c단* ===\n", ch);    //%c 이기 때문에 아스키로 저장된 숫자도 정수로 나옴  
	dan=ch-'0';        //아스키 코드를 정수로 변환 
	for(i=1; i<=9; i++)
		printf("%d X %d = %2d\n", dan, i, dan*i);
		printf("\n다시 출력할까?(y/n) => ");
	yes=getche(); putchar('\n');
	}while(yes == 'y' || yes == 'Y');
}
