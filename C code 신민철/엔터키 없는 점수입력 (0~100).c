//����Ű ���� �����Է� (0~100)
#include<stdio.h>
main(){
	int i, score=0;
	int n, o, num;
	int max=0, min=100;
	char ch;
	
	printf("�л� ���� �Է��ϼ��� : ");
		scanf("%d", &n);
	printf("-----------------------\n");
	
	for(o=0; o<n; o++){

	
		printf("%d�� �л��� ������ �Է��ϼ��� => ", o+1);
		for(i=0; i<=1; i++){
			ch=getch();
			if(ch>='0' && ch<='9'){
			score=score*10+ch-'0';		//���ڸ� ���ڷ� �ٲٰ� ����ġ
			putchar(ch);
			}
		else if(ch==13) break;
		
		else{
			printf("\n�Է� ����!!!");	break; 
		}
		}
		if(score==10){
			ch=getch();
			if(ch=='0'){
				score=100;
				putchar(ch);
			}
			else if(ch==13);
			
			else printf("\n�Է� ����!!!");
		}
		if(ch>max)
			max=ch;
		if(ch<min)
			min=ch;
	}
	 printf("1���� %d ��, ����� %d �� \n", max, min);
} 
