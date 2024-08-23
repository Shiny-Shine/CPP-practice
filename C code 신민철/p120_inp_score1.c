//enter키 없는 점수입력 (p120_inp_score1)
#include<stdio.h>
main(){
	int i, score=0;
	char ch;
	
	printf("점수를 입력 하새요. =>");
	
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
	 printf("\n입력한 점수는 %d점입니다.", score);
}
