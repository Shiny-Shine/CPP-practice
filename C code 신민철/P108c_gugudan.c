//������ (P108c_gugudan) 
#include<stdio.h>
main(){
	int i, dan;
	char ch, yes;
	do{
	printf("����� �������� ���? =>  ");
	ch=getche();
	printf("\n\n=== *%c��* ===\n", ch);    //%c �̱� ������ �ƽ�Ű�� ����� ���ڵ� ������ ����  
	dan=ch-'0';        //�ƽ�Ű �ڵ带 ������ ��ȯ 
	for(i=1; i<=9; i++)
		printf("%d X %d = %2d\n", dan, i, dan*i);
		printf("\n�ٽ� ����ұ�?(y/n) => ");
	yes=getche(); putchar('\n');
	}while(yes == 'y' || yes == 'y');
}
