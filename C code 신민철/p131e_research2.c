//원하는 정수 찾기(p131e_research2)
#include<stdio.h>
main(){
	int i, score[20], want, flag=0;
	
	srand(time(NULL));
	for(i=0; i<20; i++)
		score[i]=1+rand()%100;
	
	printf("당신이 원하는 점수는 => ");
	scanf("%d",&want);
	printf("===== 점수 출력 =====\n");
	for(i=0; i<20; i++)
		printf("%2d번 점수 => %3d\n",i+1, score[i]);
	
	printf("\n===== 검색 결과 출력 =====\n");
	for(i=0; i<20; i++)
		if(score[i]==want){
			flag = 1;
			break;
		}
	if(flag==1) printf("당신이 원하는 점수를 %d번째에서 찾았습니다.", i+1);
	else printf("당신이 원하는 점수는 없습니다.");
}
