//�ް� �ο�(��������ǥ) ��� (p131c_grade1) 
#include<stdio.h>
main(){
	int i, score[20], a, b, c, d, e; 

	srand(time(NULL));
	for(i=0; i<20; i++)
		score[i]=1+rand()%100;
		
	printf("===== ���� ��� =====\n");
	for(i=0; i<20; i++)
		printf("%2d�� ���� => %3d\n",i+1, score[i]);
	
	printf("\n===== ���û� ��� =====\n");
	a=b=c=d=e=0;
	for(i=0; i<20; i++)
		if(score[i] >= 90)	a++;
		else if(score[i] >= 80)	b++;
		else if(score[i] >= 70)	c++;
		else if(score[i] >= 60)	d++;
		else	e++;
		
		printf("A��� : %d��, B��� : %d��, C��� : %d��, D��� : %d��, E��� : %d��.\n", a, b, c, d, e);
		
}

