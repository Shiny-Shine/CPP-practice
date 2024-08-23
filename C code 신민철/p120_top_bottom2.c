//1등과 꼴등 (p120_top_bottom2)
#include<stdio.h>
main(){
	int n, i, num, o;
	char max=0, min=100;
	char ch;
	printf("학생 수를 입력하세요 : ");
		scanf("%d", &n);
	printf("-----------------------\n");

	for(i=0; i<n; i++)
	{
		int score=0;
		
		printf("\n%d 번 학생의 점수를 입력하세요 (0~100) : ", i+1);
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
	 printf("1등은 %d 점, 꼴찌는 %d 점 \n", max, min);
} 
