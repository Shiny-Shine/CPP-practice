//�ް� �ο�(��������ǥ) ��� (p131d_grade2) 
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
		switch (score[i]/10)	{
			case 10:
			case 9:a++;	break;
			case 8:b++;	break;
			case 7:c++;	break;
			case 6:d++;	break;
			default:	e++;
		}
		
		printf("A��� : %d��, B��� : %d��, C��� : %d��, D��� : %d��, E��� : %d��.\n", a, b, c, d, e);
		
}

