//enterŰ ���� �����Է� (p120_inp_score1)
#include<stdio.h>
main(){
	int i, score=0;
	char ch;
	
	printf("������ �Է� �ϻ���. =>");
	
	for(i=0; i<=1; i++) {
		do{
			ch=getch();
			}while((ch<'0' || ch>'9') && ch!=13); 
		if(ch=='0' && i==0) {	
			putchar('0');
			break;
			}
		else if(ch>='0' && ch<='9'){
			score=score*10+ch-'0';
			putchar(ch);	

		}

	}

	if(score==10) {   
		do{
			ch=getch();
			}while(ch!='0' && ch!=13);
		if(ch=='0'){
			score=100;
			putchar('0');
		}
	}
	 printf("\n�Է��� ������ %d���Դϴ�.", score);
}
