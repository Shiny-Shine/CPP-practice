//1��� �õ� (p120_top_bottom2)
#include<stdio.h>
main(){
	int n, i, num, o;
	char max=0, min=100;
	char ch;
	printf("�л� ���� �Է��ϼ��� : ");
		scanf("%d", &n);
	printf("-----------------------\n");

	for(i=0; i<n; i++)
	{
		int score=0;
		
		printf("\n%d �� �л��� ������ �Է��ϼ��� (0~100) : ", i+1);
	for(o=0; o<=1; o++) {
		do{
			ch=getch();
			}while((ch<'0' || ch>'9') && ch!=13); 
		if(ch=='0' && o==0) {	
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
		if(score>max)
			max=score;
		if(score<min)
			min=score;
}
	 printf("\n-----------------------\n");
	 printf("1���� %d ��, ����� %d �� \n", max, min);
} 
