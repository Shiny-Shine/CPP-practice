//�հ�, ���հ��� �ο� ���(p131b_nopass) 
#include<stdio.h>
main(){
	int i, score[20], pass=0, nonps = 0;

	srand(time(NULL));
	for(i=0; i<20; i++)
		score[i]=1+rand()%100;
		
	printf("===== ���� ��� =====\n");
	for(i=0; i<20; i++)
		printf("%2d�� ���� => %3d\n",i+1, score[i]);
	
	printf("\n===== ���û� ��� =====\n");
	for(i=0; i<20; i++)
		if(score[i]>=70)	pass++;
		else	nonps++;
	
	printf("�հ��ڴ� %d���̰�, ���հ��ڴ� %d���Դϴ�.\n", pass, nonps);	
}

