//���ϴ� ���� ã��(p131e_research2)
#include<stdio.h>
main(){
	int i, score[20], want, flag=0;
	
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
		if(score[i]==want){
			flag = 1;
			break;
		}
	if(flag==1) printf("����� ���ϴ� ������ %d��°���� ã�ҽ��ϴ�.", i+1);
	else printf("����� ���ϴ� ������ �����ϴ�.");
}
