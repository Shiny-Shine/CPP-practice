//���ϴ� ���� ã��(p131e_research1)
#include<stdio.h>
main(){
	int i, score[20], want;
	
	srand(time(NULL));
	for(i=0; i<20; i++)
		score[i]=1+rand()%100;
	
	printf("����� ���ϴ� ������ => ");
	scanf("%d",&want);
	printf("===== ���� ��� =====\n");
	for(i=0; i<20; i++)
		printf("%2d�� ���� => %3d\n",i+1, score[i]);
	
	printf("\n===== �˻� ��� ��� =====\n");
	for(i=0; i<20; i++)
		if(score[i] == want) break;	//���ϴ� ������ ������� �������;��� 
	
	if(i == 20)	printf("����� ���ϴ� ������ �����ϴ�.");
	else printf("����� ���ϴ� ������ %d��°���� ã�ҽ��ϴ�,", i+1); 
	} 
