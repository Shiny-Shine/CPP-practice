//엔터키 없는 점수입력 (0~100)
#include<stdio.h>
main(){
	int i, score=0;
	int n, o, num;
	int max=0, min=100;
	char ch;
	
	printf("학생 수를 입력하세요 : ");
		scanf("%d", &n);
	printf("-----------------------\n");
	
	for(o=0; o<n; o++){

	
		printf("%d번 학생의 점수를 입력하세요 => ", o+1);
		for(i=0; i<=1; i++){
			ch=getch();
			if(ch>='0' && ch<='9'){
			score=score*10+ch-'0';		//문자를 숫자로 바꾸고 가중치
			putchar(ch);
			}
		else if(ch==13) break;
		
		else{
			printf("\n입력 오류!!!");	break; 
		}
		}
		if(score==10){
			ch=getch();
			if(ch=='0'){
				score=100;
				putchar(ch);
			}
			else if(ch==13);
			
			else printf("\n입력 오류!!!");
		}
		if(ch>max)
			max=ch;
		if(ch<min)
			min=ch;
	}
	 printf("1등은 %d 점, 꼴찌는 %d 점 \n", max, min);
} 
