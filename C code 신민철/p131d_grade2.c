//급간 인원(도수분포표) 출력 (p131d_grade2) 
#include<stdio.h>
main(){
	int i, score[20], a, b, c, d, e; 

	srand(time(NULL));
	for(i=0; i<20; i++)
		score[i]=1+rand()%100;
		
	printf("===== 점수 출력 =====\n");
	for(i=0; i<20; i++)
		printf("%2d번 점수 => %3d\n",i+1, score[i]);
	
	printf("\n===== 응시생 통계 =====\n");
	a=b=c=d=e=0;
	for(i=0; i<20; i++)
		switch (score[i]/10)	{
			case 10:
			case 9:a++;	break;
			case 8:b++;	break;
			case 7:c++;	break;
			case 6:d++;	break;
			default:	e++;
		}
		
		printf("A등급 : %d명, B등급 : %d명, C등급 : %d명, D등급 : %d명, E등급 : %d명.\n", a, b, c, d, e);
		
}

