//������ (P108d_gugudan) 
#include<stdio.h>
main(){
	int i, dan;
	char ch, yes;
	do{
		system("cls"); 		//Ŭ���� ��ũ��! 
		do{
	printf("����� �������� ���? =>  ");
	ch=getche();
	if(ch<'1' || ch>'9')    	//ch �� 1���� �۰ų� 9���� ũ�� �߸� �Է��Ͽ����ϴ� ��� 
		printf("�߸� �Է��ϼ˽��ϴ�. \n\n");
	}while(ch <'1' || ch>'9');				//ch��  1���� �۰ų� 9���� ũ�� ch�Էº��� �ٽ� ��� �ݺ�  
	printf("\n\n=== *%c��* ===\n", ch);    //%c �̱� ������ �ƽ�Ű�� ����� ���ڵ� ������ ����  
	dan=ch-'0';        //�ƽ�Ű �ڵ带 ������ ��ȯ 
	for(i=1; i<=9; i++)
		printf("%d X %d = %2d\n", dan, i, dan*i);
		printf("\n�ٽ� ����ұ�?(y/n) => ");
	yes=getche(); putchar('\n');
	}while(yes == 'y' || yes == 'Y');
}
