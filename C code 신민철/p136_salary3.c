//�޿� ����(p136_salary3) 
#include<stdio.h>
#define NO 3 //������ �� 
int main() {
	char n, i, ch;
	char *grade[6]={"���","�븮","����","����","����","�̻�"};
	int salary[NO][5], sub[6][4]={{1500,200,1400,5},{2100,300,2000,7},{2500,500,2300,10},{3200,600,3100,15},{3700,700,3300,20},{4500,900,4300,25}};
	char name[NO][9];
	int code[NO];
	
	printf("=== ������ �������� �Է� ===\n");
	
	printf("------------------------------\n"); 
	for(i=0; i<NO; i++){
		printf("%2d �̸� => ", i+1);
		gets(name+i);	//scanf("%s", name[n]);
		printf("   ���� => ");
		do{
			ch=getch();
		}while(ch<'1' || ch > '6');
		printf("%c\n", ch); 
		code[n]=ch-'0';
	}
	
	for(n=0; n<NO; n++) {
		for(i=0; i<=3; i++) salary[n][i]=sub[code[n]][i];
		salary[n][4]=salary[n][0]+salary[n][1]+salary[n][2];
	} 
		printf("                       9�� ���� ���� (���� : õ��)\n\n");
		printf("��ȣ  �̸�	����  �⺻��	������	�󿩱�	�հ�  ����  ���ɾ�\n");
		printf("\n------------------------------------------------------------------------------\n");
		
			for(n=0; n<NO; n++) {
		printf(" %2d ", n+1);	
		printf("  %-9s", name[n]);
		printf(" %s  ", grade[code[n]]);
		printf("  %2d   %2d    %2d  <%d>   %2d%%    %d\n", salary[n][0], salary[n][1], salary[n][2], salary[n][4], salary[n][3], salary[n][4] - salary[n][4]*salary[n][3] /100);
		
		if((n+1)%5==0)
		printf("--------------------------------------------------------------------------------\n");
	}
}
